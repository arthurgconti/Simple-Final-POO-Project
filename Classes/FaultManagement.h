//
// Created by Arthur Conti on 6/26/2021.
//

#ifndef EP5_FAULTMANAGEMENT_H
#define EP5_FAULTMANAGEMENT_H


class FaultManagement {

public:
    int alertMotorRotationFault(int);
    int alertMaxVelocity(float);
    int alertOilPressure(int);
    int alertOilTemperature(int);
    int alertCarTemperature(int);
};


#endif //EP5_FAULTMANAGEMENT_H
