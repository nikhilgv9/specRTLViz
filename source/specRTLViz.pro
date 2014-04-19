#-------------------------------------------------
#
# Project created by QtCreator 2014-03-24T03:25:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = demo
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    treeview.cpp \
    graphicsviewzoom.cpp \
    statTreeNode.cc \
    srtl-driver.cc \
    srtl.cc \
    pattern.cc \
    node.cc \
    list.cc \
    concrete_pattern.cc \
    abstract.cc \
    srtl-scanner.cc \
    srtl-parser.tab.cc \
    node2.cpp \
    textellipse.cpp \
    linenumberarea.cpp \
    codeeditor.cpp \
    temp.cpp \
    highlighter.cpp \
    findframe.cpp \
    dockablearea.cpp

HEADERS  += mainwindow.h \
    treeview.h \
    graphicsviewzoom.h \
    support.hh \
    statTreeNode.hh \
    srtl-driver.hh \
    pattern.hh \
    node.hh \
    list.hh \
    concrete_pattern.hh \
    abstract.hh \
    srtl-parser.tab.hh \
    node2.h \
    textellipse.h \
    parsercontext.h \
    srtl-scanner.ll \
    linenumberarea.h \
    codeeditor.h \
    temp.h \
    highlighter.h \
    position.hh \
    location.hh \
    findframe.h \
    dockablearea.h


FORMS    += mainwindow.ui

OTHER_FILES += \
    srtl-parser.yy
