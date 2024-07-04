#include "include/flashcards_menu/flashcard.h"

flashcard::flashcard(std::string word, QObject *parent)
    : QObject{parent}
{
    curl_global_init(CURL_GLOBAL_ALL);
    std::string url = "https://en.wiktionary.org/wiki/" + word;
    std::string html_document = get_request(url);
}

std::string flashcard::get_request(std::string url)
{
    CURL *curl = curl_easy_init();
    std::string result;

    if(curl){
        curl_easy_setopt(curl, CURLOPT_URL, url.c_str());
        curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, [](void *contents, size_t size, size_t nmemb, std::string *response){
            ((std::string*)response)->append((char*) contents, size*nmemb); return size*nmemb;
        });
        curl_easy_setopt(curl, CURLOPT_WRITEDATA, &result);
        curl_easy_perform(curl);
        curl_easy_cleanup(curl);
    }
    return result;
}
