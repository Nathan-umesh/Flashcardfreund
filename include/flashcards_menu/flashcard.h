#ifndef FLASHCARD_H
#define FLASHCARD_H

#include <QObject>
#include <curl.h>
#include "libxml/HTMLparser.h"
#include "libxml/xpath.h"

class flashcard : public QObject
{
    Q_OBJECT
public:
    explicit flashcard(std::string word, QObject *parent = nullptr);
    std::string get_request(std::string url);
signals:
};

#endif // FLASHCARD_H
