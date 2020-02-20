#include "mainframe.h"

#include <QApplication>
#include <QTranslator>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTranslator tr;
    tr.load(":/i18n/TSMS_QT4_zh_CN.qm");
    a.installTranslator(&tr);
    MainFrame w;
    w.show();
    return a.exec();
}
