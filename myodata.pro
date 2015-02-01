#-------------------------------------------------
#
# Project created by QtCreator 2015-01-31T21:28:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = myodata
TEMPLATE = app


SOURCES += main.cpp\
        myodata.cpp \
    qcustomplot.cpp \
    collector.cpp

HEADERS  += myodata.h \
    qcustomplot.h \
    myo/cxx/detail/ThrowOnError.hpp \
    myo/cxx/impl/Hub_impl.hpp \
    myo/cxx/impl/Myo_impl.hpp \
    myo/cxx/impl/Pose_impl.hpp \
    myo/cxx/DeviceListener.hpp \
    myo/cxx/Hub.hpp \
    myo/cxx/Myo.hpp \
    myo/cxx/Pose.hpp \
    myo/cxx/Quaternion.hpp \
    myo/cxx/Vector3.hpp \
    myo/libmyo/detail/visibility.h \
    myo/libmyo.h \
    myo/myo.hpp \
    collector.h

OTHER_FILES += \
myo64.lib \
myo32.lib

FORMS    += myodata.ui

win32: LIBS += -L$$PWD/ -lmyo64


INCLUDEPATH += $$PWD/
DEPENDPATH += $$PWD/
