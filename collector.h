#ifndef COLLECTOR_H
#define COLLECTOR_H

#include <QObject>
#include "myo/myo.hpp"

class Collector : public QObject, public myo::DeviceListener
{
public:
    Collector();
};

#endif // COLLECTOR_H
