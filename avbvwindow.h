#ifndef AVBVWINDOW_H
#define AVBVWINDOW_H

#include <QWidget>

namespace Ui {
class avbvWindow;
}

class avbvWindow : public QWidget
{
    Q_OBJECT

public:
    explicit avbvWindow(QWidget *parent = nullptr);
    ~avbvWindow();
    virtual void closeEvent(QCloseEvent *e);
    void setParentWindow(QWidget *w);
    void startAvbv();
    void CE();
private:
    void av2bv();
    void bv2av();
    Ui::avbvWindow *ui;
    QWidget *parentWindow;
};

#endif // AVBVWINDOW_H
