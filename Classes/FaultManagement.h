//
// Created by Arthur Conti on 6/26/2021.
//

#ifndef EP5_FAULTMANAGEMENT_H
#define EP5_FAULTMANAGEMENT_H


class FaultManagement {

public:
    void showErrorStatus(int,float,float,int,int,int);
    void alertMotorRotationFault(int);
    void alertMaxVelocity(int);
    void alertOilPressure(int);
    void alertOilTemperature(int);
    void alertCarTemperature(int);
};


#endif //EP5_FAULTMANAGEMENT_H
