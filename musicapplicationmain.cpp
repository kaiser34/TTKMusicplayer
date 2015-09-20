#include "musicapplication.h"
#include "musicobject.h"
#include "musicxmlconfigmanager.h"
#include "musicnetworkthread.h"
//#include "musiclogger.h"

#include <QApplication>
#include <QTranslator>
//#include <vld.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QCoreApplication::setOrganizationName("QMusicPlayer");
    QCoreApplication::setOrganizationDomain("QMusicPlayer.com");
    QCoreApplication::setApplicationName("QMusicPlayer");

    MusicXMLConfigManager *xml = new MusicXMLConfigManager;
    xml->readXMLConfig();

    QTranslator translator;
    translator.load(MusicObject::getLanguageName(xml->readLanguageIndex()));
    a.installTranslator(&translator);
    delete xml;

    //detect the current network state
    M_NETWORK->start();

    MusicObject::checkTheDirectoryExist();
//    M_LOOGER("MusicApplication Begin");
    MusicApplication w;
    w.show();

    return a.exec();
}