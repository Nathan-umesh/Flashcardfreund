QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    src/flashcards_menu/flashcard.cpp \
    src/flashcards_menu/flashcards_page.cpp \
    src/main.cpp \
    src/mainwindow.cpp \
    src/path_menu/flashcard_button.cpp \
    src/path_menu/path_page.cpp \
    src/path_menu/progress_button.cpp

HEADERS += \
    include/flashcards_menu/flashcards_page.h \
    include/mainwindow.h \
    include/path_menu/flashcard_button.h \
    include/path_menu/path_page.h \
    include/path_menu/progress_button.h \
    include/flashcards_menu/flashcard.h

FORMS += \
    forms/flashcards.ui \
    forms/mainwindow.ui \
    forms/path.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target



win32: LIBS += -L$$PWD/../../../../vcpkg/installed/x64-windows/lib/ -llibcurl

INCLUDEPATH += $$PWD/../../../../vcpkg/installed/x64-windows/include/curl
DEPENDPATH += $$PWD/../../../../vcpkg/installed/x64-windows/include/curl


win32: LIBS += -L$$PWD/../../../../vcpkg/installed/x64-windows/lib/ -llibxml2

INCLUDEPATH += $$PWD/../../../../vcpkg/installed/x64-windows/include/libxml2
DEPENDPATH += $$PWD/../../../../vcpkg/installed/x64-windows/include/libxml2
