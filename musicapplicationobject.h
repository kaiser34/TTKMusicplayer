#ifndef MUSICAPPLICATIONOBJECT_H
#define MUSICAPPLICATIONOBJECT_H

/* =================================================
 * This file is part of the Music Player project
 * Copyright (c) 2014 - 2015 Greedysky Studio
 * All rights reserved!
 * Redistribution and use of the source code or any derivative
 * works are strictly forbiden.
   =================================================*/

#include <QMimeData>
#include <QFileDialog>
#include "musiclibexportglobal.h"

class MusicTimerAutoObject;
class MusicMobileDevicesWidget;
class QPropertyAnimation;

class MUSIC_GUI_EXPORT MusicApplicationObject : public QObject
{
    Q_OBJECT
public:
    explicit MusicApplicationObject(QObject *parent = 0);
    ~MusicApplicationObject();

    bool getWindowToTop() const {return m_setWindowToTop;}
    void nativeEvent(const QByteArray &eventType,
                     void *message, long *result);

signals:
    void getCurrentPlayList(QStringList &list);

public slots:
    void musicAboutUs();
    void musicAudioRecorder();
    void musicTimerWidget();
    void musicSetWindowToTop();
    void musicToolSetsParameter();
    void musicSetEqualizer();

protected:
    bool m_setWindowToTop;
    QPropertyAnimation *m_animation;
    QWidget *m_supperClass;
    MusicTimerAutoObject *m_musicTimerAutoObj;
    MusicMobileDevicesWidget *m_mobileDevices;

};

#endif // MUSICAPPLICATIONOBJECT_H