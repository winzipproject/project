TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG += qt

SOURCES += main.cpp \
    filepool.cpp \
    worker.cpp

QMAKE_CXXFLAGS += -std=c++11

HEADERS += \
    filepool.h \
    worker.h
