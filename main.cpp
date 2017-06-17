#include "mydialogwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myDialogWindow w;
    w.show();

    return a.exec();
}
