QT       += core gui sql network


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11
TARGET = Captcha
TEMPLATE = app

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    captcha.cpp \
    code.cpp \
    login.cpp \
    main.cpp \
    setname.cpp \
    start.cpp

HEADERS += \
    captcha.h \
    code.h \
    login.h \
    setname.h \
    start.h

FORMS += \
    code.ui \
    login.ui \
    setname.ui \
    start.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Loading.qrc \
    bac2.qrc \
    background.qrc \
    eyes.qrc \
    icon.qrc \
    img.qrc \
    img2.qrc \
    img3.qrc \
    img4.qrc \
    img5.qrc \
    img5.qrc \
    logo.qrc \
    logo_icon.qrc \
    startImg.qrc \
    user_prof.qrc
