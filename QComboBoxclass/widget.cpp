#include "widget.h"
#include "ui_widget.h"
#include<QDebug>
#include<QIcon>
#include<QStringList>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    QStringList list;
    list <<"Mango"<<"Apple"<<"Orange"<<"Cherry"<<"Watermelon"<<"Papaya";
    ui->comboBox->setStyleSheet("background-color: rgb(255,255,255) ; color: rgb(153,0,76);");
    ui->comboBox->setEditable(true);
    ui->comboBox->addItem(QIcon("C:/Users/kumar/Documents/QComboBoxclass/icons/mangoicon.jpg"),list.at(0));
    ui->comboBox->addItem(QIcon("C:/Users/kumar/Documents/QComboBoxclass/icons/appleicon.png"),list.at(1));
    ui->comboBox->addItem(QIcon("C:/Users/kumar/Documents/QComboBoxclass/icons/orangeicon.jpg"),list.at(2));
    ui->comboBox->addItem(QIcon("C:/Users/kumar/Documents/QComboBoxclass/icons/cherryicon.jpg"),list.at(3));
    ui->comboBox->addItem(QIcon("C:/Users/kumar/Documents/QComboBoxclass/icons/watermelonicon.png"),list.at(4));
    ui->comboBox->addItem(QIcon("C:/Users/kumar/Documents/QComboBoxclass/icons/papayaicon.jpg"),list.at(5));



}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_CaptureValuespushButton_clicked()
{
    qDebug()<<"Captured values are :";
    qDebug() << "The currently chosen item is" << ui->comboBox->currentText();
    qDebug() << "The index is " << ui->comboBox->currentIndex();
}

void Widget::on_SetValuespushButton_clicked()
{
    ui->comboBox->setCurrentIndex(3);
    qDebug()<<"Set values are :";
    qDebug()<<"The value is currently set to index 3";
}

void Widget::on_GetValuespushButton_clicked()
{
    qDebug()<<"Get values are :";
    qDebug()<<"The combo box currently has"<<QString::number(ui->comboBox->count())<<"Items.They are";
    for(int i=0;i<ui->comboBox->count();i++)
        {
            qDebug()<<"Index"<<QString::number(i)<<":"<<ui->comboBox->itemText(i);
        }
}
