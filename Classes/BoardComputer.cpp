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
    this->setCarTemperature(this->getCarTemperature()-10);
    this->setVelocity(this->getVelocity()-700);
    this->setMotorRpm(this->getMotorRpm()-1500);
    this->setOilPression(this->getOilPression()-5);
    this->setOilTemperature(this->getOilTemperature()-3);

    this->setBaterryVolt(this->getBaterryVolt()-4);

    std::cout << "Aliviando o carro e atualizando dados do sistema..." << std::endl;
    sleep(3);
}
