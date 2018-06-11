TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt
CONFIG += C++11

SOURCES += main.cpp \
    quote.cpp \
    bulk_quote.cpp \
    d3.cpp \
    d7.cpp \
    d11.cpp \
    d15.cpp \
    test.cpp \
    d18.cpp

HEADERS += \
    quote.h \
    bulk_quote.h \
    d3.h \
    d7.h \
    d11.h \
    d15.h \
    test.h \
    d18.h
