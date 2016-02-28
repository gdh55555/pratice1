#include "widget.h"
#include <QApplication>
#include <QDesktopWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    w.resize(QApplication::desktop()->width(), QApplication::desktop()->height());
    w.show();


    return a.exec();
}
