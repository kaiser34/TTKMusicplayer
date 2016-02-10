#-------------------------------------------------
#
# Project created by QtCreator 2014-08-08T23:19:41
#
#-------------------------------------------------

INCLUDEPATH += $$PWD

!contains(CONFIG, TTK_NO_MSVC_LINK_NEED){
HEADERS  += \
    $$PWD/musicvideocontrol.h \
    $$PWD/musicvideoview.h \
    $$PWD/musicvideotablewidget.h \
    $$PWD/musicvideoplaywidget.h

}

contains(CONFIG, TTK_BUILD_LIB){
SOURCES += \
    $$PWD/musicvideocontrol.cpp \
    $$PWD/musicvideoview.cpp \
    $$PWD/musicvideotablewidget.cpp \
    $$PWD/musicvideoplaywidget.cpp


RESOURCES += \
    musicQrc/MusicPlayerVedio.qrc

}
