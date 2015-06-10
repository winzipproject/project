#-------------------------------------------------
#
# Project created by QtCreator 2015-06-09T19:48:07
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = projetwinzip
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    filepool.cpp \
    zipper.cpp \
    zippedbuffer.cpp \
    zippedbufferpool.cpp \
    writer.cpp \
    epsifilecompressor.cpp

HEADERS += \
    filepool.h \
    zipper.h \
    zippedbuffer.h \
    zippedbufferpool.h \
    writer.h \
    epsifilecompressor.h
