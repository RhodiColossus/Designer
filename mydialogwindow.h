#ifndef MYDIALOGWINDOW_H
#define MYDIALOGWINDOW_H

#include <QMainWindow>

class myDialogWindow : public QMainWindow
{
    Q_OBJECT

public:
    myDialogWindow(QWidget *parent = 0);
    ~myDialogWindow();
};

#endif // MYDIALOGWINDOW_H
