#include "mydialogwindow.h"
#include "ui_mydialogwindow.h"

MyDialogWindow::MyDialogWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MyDialogWindow)
{
    ui->setupUi(this);
    ui->OkButton->setEnabled(false);


    QRegExp exp("[a-zA-Z]{1,15}[0-9]{0,15}");
      ui->lineEdit->setValidator(new QRegExpValidator(exp,this));
        connect(ui->lineEdit,SIGNAL(textChanged(QString)),this,SLOT(OkEnable()));
}

MyDialogWindow::~MyDialogWindow()
{
    delete ui;
}

void MyDialogWindow::OkEnable(){

    ui->OkButton->setEnabled(ui->lineEdit->hasAcceptableInput());



}


void MyDialogWindow::on_CloseButton_clicked()
{

}
