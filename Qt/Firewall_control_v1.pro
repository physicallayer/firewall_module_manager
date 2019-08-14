#-------------------------------------------------
#
# Project created by QtCreator 2019-08-14T04:31:34
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Firewall_control_v1
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        widget.cpp \
    log_dialog.cpp \
    set_outbound_dialog.cpp \
    set_inbound_dialog.cpp \
    error_dialog.cpp

HEADERS += \
        widget.h \
    log_dialog.h \
    set_outbound_dialog.h \
    set_inbound_dialog.h \
    error_dialog.h

FORMS += \
        widget.ui \
    log_dialog.ui \
    set_outbound_dialog.ui \
    set_inbound_dialog.ui \
    error_dialog.ui

RESOURCES += \
    button_image.qrc
