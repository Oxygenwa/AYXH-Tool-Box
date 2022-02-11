#include "avbvwindow.h"
#include "ui_avbvwindow.h"
#include <QPushButton>
#include <QDebug>
#include <QCloseEvent>
#include <QMessageBox>
#include <string>
#include <strstream>
#include <cmath>
using namespace std;
avbvWindow::avbvWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::avbvWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_back,&QPushButton::clicked,this,&QWidget::close);
    connect(ui->pushButton_start,&QPushButton::clicked,[=](){this->startAvbv();});
    connect(ui->pushButton_CE,&QPushButton::clicked,this,&avbvWindow::CE);
}

avbvWindow::~avbvWindow()
{
    delete ui;
}

void avbvWindow::setParentWindow(QWidget *w)
{
    parentWindow=w;
}

void avbvWindow::closeEvent(QCloseEvent *e)
{
    parentWindow->show();
}

void avbvWindow::startAvbv()
{
    if(ui->avNum->text()!=QString(""))
        av2bv();
    else if(ui->bvNum->text()!=QString(""))
        bv2av();
    else
        ui->avNum->setText("输入啊哥们");
}

void avbvWindow::av2bv()
{
    qDebug()<<"av2bv";
}

void avbvWindow::bv2av()
{
    qDebug()<<"bv2av";
    const string s="fZodR9XQDSUm21yCkr6zBqiveYah8bt4xsWpHnJE7jL5VG3guMTKNPAwcF";
    long long minus=100618342136696320;
    long long bminus=177451812;
    string mystr=ui->bvNum->text().toStdString();
    //qDebug(mystr.c_str());
    mystr.erase(0,1);
    mystr.erase(0,1);
    //qDebug(mystr.c_str());
    long long nums[10]={0,0,0,0,0,0,0,0,0,0};
    short m[10]={6,2,4,8,5,9,3,7,1,0};
    int n = 0;
    for(auto i : mystr)
    {
        int r = -1;
        for(auto j : s)
        {
            r+=1;
            if(i==j)
                nums[n]=r*pow(58,m[n]);
        }
        n+=1;
    }
    long long total=0;
    for(int i=0;i<10;i++)
    {
        total+=nums[i];
    }
    total=total-minus;
    total=total^bminus;
    strstream ss;
    ss<<"av";
    ss<<total;
    ss>>mystr;
    ui->avNum->setText(QString(mystr.c_str()));
}

void avbvWindow::CE()
{
    ui->avNum->setText("");
    ui->bvNum->setText("");
}
