#include "include/flashcards_menu/flashcards.h"
#include "ui_flashcards.h"

Flashcards::Flashcards(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Flashcards)
{
    ui->setupUi(this);
    auto grid_layout = new QGridLayout(this);
    //all types of flashcard decks being created
    auto general_button = new QPushButton("General");
    general_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid_layout->addWidget(general_button, 0, 0, 1, 0);

    auto poverty_button = new QPushButton("Poverty");
    poverty_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid_layout->addWidget(poverty_button, 1, 0);

    auto jobs_button = new QPushButton("Jobs");
    jobs_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid_layout->addWidget(jobs_button, 1, 1);

    auto education_button = new QPushButton("Education");
    education_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid_layout->addWidget(education_button, 2, 0);

    auto drugs_button = new QPushButton("Drugs");
    drugs_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid_layout->addWidget(drugs_button, 2, 1);

    auto nutrition_button = new QPushButton("Nutrition");
    nutrition_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid_layout->addWidget(nutrition_button, 3, 0);

    auto history_and_warfare_button = new QPushButton("History and Warfare");
    history_and_warfare_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid_layout->addWidget(history_and_warfare_button, 3, 1);

    auto health_button = new QPushButton("Health");
    health_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid_layout->addWidget(health_button, 4, 0);

    auto stem_button = new QPushButton("STEM");
    stem_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid_layout->addWidget(stem_button, 4, 1);

    auto climate_and_nature_button = new QPushButton("Climate and Nature");
    climate_and_nature_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid_layout->addWidget(climate_and_nature_button, 5, 0);

    auto life_and_culture_button = new QPushButton("Life and Culture");
    life_and_culture_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid_layout->addWidget(life_and_culture_button, 5, 1);

    auto politics_button = new QPushButton("Politics");
    politics_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid_layout->addWidget(politics_button, 6, 0);

    auto law_button = new QPushButton("Law");
    law_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid_layout->addWidget(law_button, 6, 1);

    auto city_button = new QPushButton("City");
    city_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid_layout->addWidget(city_button, 7, 0);

    auto animals_button = new QPushButton("Animals");
    animals_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid_layout->addWidget(animals_button, 7, 1);

    auto economy_button = new QPushButton("Economy");
    economy_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid_layout->addWidget(economy_button, 8, 0);

    auto science_button = new QPushButton("Science");
    science_button->setSizePolicy(QSizePolicy::Expanding,QSizePolicy::Expanding);
    grid_layout->addWidget(science_button, 8, 1);
}

Flashcards::~Flashcards()
{
    delete ui;
}
