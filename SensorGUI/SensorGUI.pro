QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../build-SensorGUI-Desktop_Qt_6_5_3_GCC_64bit-Debug/datagate.cpp \
    ../build-SensorGUI-Desktop_Qt_6_5_3_GCC_64bit-Debug/temperatursensor.cpp \
    controller.cpp \
    main.cpp \
    model.cpp \
    myview1.cpp \
    view.cpp \
    widget.cpp

HEADERS += \
    ../build-SensorGUI-Desktop_Qt_6_5_3_GCC_64bit-Debug/datagate.h \
    ../build-SensorGUI-Desktop_Qt_6_5_3_GCC_64bit-Debug/temperatursensor.h \
    controller.h \
    model.h \
    myview1.h \
    view.h \
    widget.h

FORMS += \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
