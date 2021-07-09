//
// Created by Arthur Conti on 6/27/2021.
//
#ifndef EP5_BOARDCOMPUTER_H
#define EP5_BOARDCOMPUTER_H
#include <ctime>
#include "PerformanceManagement.h"
#include "FaultManagement.h"


class BoardComputer : public PerformanceManagement, public FaultManagement{
public:
    BoardComputer(float carTemperature, float maxVelocity, float velocity, int motorRpm, int baterryVolt,
                  float oilPression, float oilTemperature);
    void relieveCar();

};


#endif //EP5_BOARDCOMPUTER_H
