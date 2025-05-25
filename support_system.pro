QT       += core gui
QT       += sql


greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    DatabaseManager.cpp \
    SessionInfo.cpp \
    WidgetStackManager.cpp \
    agentmainwin.cpp \
    agentrepinfowin.cpp \
    agentresponselist.cpp \
    agentresponsewin.cpp \
    ipinsertwin.cpp \
    main.cpp \
    newperregist.cpp \
    registwindow.cpp \
    reportinfowin.cpp \
    reportlist.cpp \
    reportwritewin.cpp \
    represponsewin.cpp \
    responseinfowin.cpp \
    usercabwin.cpp \
    usermainwin.cpp

HEADERS += \
    DatabaseManager.h \
    SessionInfo.h \
    WidgetStackManager.h \
    agentmainwin.h \
    agentrepinfowin.h \
    agentresponselist.h \
    agentresponsewin.h \
    ipinsertwin.h \
    newperregist.h \
    registwindow.h \
    reportinfowin.h \
    reportlist.h \
    reportwritewin.h \
    represponsewin.h \
    responseinfowin.h \
    usercabwin.h \
    usermainwin.h

FORMS += \
    agentmainwin.ui \
    agentrepinfowin.ui \
    agentresponselist.ui \
    agentresponsewin.ui \
    ipinsertwin.ui \
    newperregist.ui \
    registwindow.ui \
    reportinfowin.ui \
    reportlist.ui \
    reportwritewin.ui \
    represponsewin.ui \
    responseinfowin.ui \
    usercabwin.ui \
    usermainwin.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    resources.qrc
