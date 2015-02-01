#ifndef MYODATA_H
#define MYODATA_H

#include <QMainWindow>
#include "qcustomplot.h"
#include "qmyo.h"
#include "myo/myo.hpp"
#include "collector.h"
//#include "myo/libmyo.h"

namespace Ui {
class myodata;
}

class myodata : public QMainWindow
{
    Q_OBJECT

public:
    explicit myodata(QWidget *parent = 0);
    ~myodata();

    Collector* collect;



private slots:
    void on_Findmyo_clicked();

    void on_recordstart_clicked();

    void on_recordend_clicked();

private:
    Ui::myodata *ui;

    myo::Myo* myo;
 //   myo::Hub hub;

    QCPCurve *twoDTrace;
    QCPColorScale *colorScale;
    QCPColorMap *imageMap;
    QCPMarginGroup *marginGroup;

};

#endif // MYODATA_H
