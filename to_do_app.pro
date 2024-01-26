QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    add_item.cpp \
    add_week.cpp \
    dialog.cpp \
    item.cpp \
    main.cpp \
    mainwindow.cpp \
    select.cpp

HEADERS += \
    add_item.h \
    add_week.h \
    app.h \
    day.h \
    dialog.h \
    item.h \
    mainwindow.h \
    select.h \
    toCook.h \
    toDo.h

FORMS += \
    add_item.ui \
    add_week.ui \
    dialog.ui \
    mainwindow.ui \
    select.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    week1 \
    weeks
