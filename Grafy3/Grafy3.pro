#-------------------------------------------------
#
# Project created by QtCreator 2016-03-15T18:57:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Grafy3
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    graph.cpp \
    consistent.cpp \
    dijkstra.cpp \
    minimumspanningtree.cpp \
    graphcenter.cpp \
    consistentgraphgenerator.cpp \
    vertex.cpp \
    graphpainter.cpp \
    engine.cpp \
    graphsizewidget.cpp \
    matrixvievcell.cpp \
    matrixview.cpp \
    dijkstraview.cpp \
    centerview.cpp \
    distancematrix.cpp

HEADERS  += mainwindow.h \
    graph.h \
    vertex.h \
    consistent.h \
    minimumspanningtree.h \
    consistentgraphgenerator.h \
    graphcenter.h \
    dijkstra.h \
    graphpainter.h \
    engine.h \
    graphsizewidget.h \
    matrixvievcell.h \
    matrixview.h \
    dijkstraview.h \
    centerview.h \
    distancematrix.h

FORMS    += mainwindow.ui \
    graphsizewidget.ui \
    dijkstraview.ui \
    centerview.ui

DISTFILES +=
