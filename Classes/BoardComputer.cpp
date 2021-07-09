//
// Created by Arthur Conti on 6/27/2021.
//

#include "BoardComputer.h"
#include <iostream>
#include <unistd.h>


BoardComputer::BoardComputer(float carTemperature, float maxVelocity, float velocity, int motorRpm, int baterryVolt,
                             float oilPression, float oilTemperature) : PerformanceManagement(carTemperature,
                                                                                              maxVelocity, velocity,
                                                                                              motorRpm, baterryVolt,
                                                                                              oilPression,
                                                                                              oilTemperature) {

}

void BoardComputer::relieveCar() {
    if(this->getCarTemperature() >=0 && this->getCarTemperature()-10 >= 0)
        this->setCarTemperature(this->getCarTemperature()-10);

    if(this->getVelocity() >=0 && this->getVelocity()-100 >= 0)
        this->setVelocity(this->getVelocity()-100);

    if(this->getMotorRpm() >=0 && this->getMotorRpm()-1500 >= 0)
        this->setMotorRpm(this->getMotorRpm()-1500);

    if(this->getOilPression() >=0 && this->getOilPression()-5 >= 0)
        this->setOilPression(this->getOilPression()-5);

    if(this->getOilTemperature() >=0 && this->getOilTemperature()-3 >= 0)
        this->setOilTemperature(this->getOilTemperature()-3);

    if(this->getBaterryVolt() >=0 && this->getBaterryVolt()-4 >= 0)
        this->setBaterryVolt(this->getBaterryVolt()-4);

    std::cout << "Aliviando o carro e atualizando dados do sistema..." << std::endl;
    sleep(3);
}
