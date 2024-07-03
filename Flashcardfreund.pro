QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/path_menu/flashcard_pack.cpp \
    src/flashcards_menu/flashcards.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/path_menu/path.cpp \
    src/path_menu/progress_button.cpp

HEADERS += \
    include/path_menu/flashcard_pack.h \
    include/flashcards_menu/flashcards.h \
    include/mainwindow.h \
    include/path_menu/path.h \
    include/path_menu/progress_button.h

FORMS += \
    forms/flashcards.ui \
    forms/mainwindow.ui \
    forms/path.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
