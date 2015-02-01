#include "myodata.h"
#include "ui_myodata.h"
#include "qcustomplot.h"
//#include "myo/libmyo.h"

myodata::myodata(QWidget *parent) :
    QMainWindow(parent),
//    hub("com.boot.pop"),
    myo(NULL),
    ui(new Ui::myodata)
{
    qDebug() << "Made it";
    ui->setupUi(this);
    collect = new Collector;
     qDebug() << "Made it";
  //   hub.addListener(&collect);

    // myo::Hub hub;
     //hub.addListener(collect);

     qDebug() << "Made it";


}

myodata::~myodata()
{
    delete ui;
}

void myodata::on_Findmyo_clicked()
{
    ui->messages->setText("Attempting to find a Myo");

  /*  myo::Myo* myo = hub.waitForMyo(10000);

    if(!myo){
        ui->messages->setText("Unable to find a Myo");
        ui->myostate->setChecked(false);
    }

    if(myo){
        ui->messages->setText("Found a Myo");
        ui->myostate->setChecked(true);
        myo->setStreamEmg(myo::Myo::streamEmgEnabled);
       // hub.addListener(collector);
    }
*/

}

void myodata::on_recordstart_clicked()
{

}

void myodata::on_recordend_clicked()
{

}
