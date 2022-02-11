#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "avbvwindow.h"
#include <QPushButton>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_avbv,&QPushButton::clicked,this,&MainWindow::gotoAVBV);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::gotoAVBV()
{
    winavbv =new avbvWindow;
    winavbv->show();
    winavbv->setParentWindow(this);
    this->hide();
}
