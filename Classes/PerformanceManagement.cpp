//
// Created by Arthur Conti on 6/26/2021.
//

#include "PerformanceManagement.h"
#include <iostream>
#include <stdlib.h>
#include <ctime>
#include <unistd.h>

using namespace std;

PerformanceManagement::PerformanceManagement(float carTemperature, float maxVelocity, float velocity, int motorRpm, int baterryVolt,
                             float oilPression, float oilTemperature){
    unsigned seed = time(0);
    srand(seed);
    time_t localTime = time(NULL);

    setCarTemperature(carTemperature);
    setMaxVelocity(maxVelocity);
    setMotorRpm(motorRpm);
    setOilPression(oilPression);
    setBaterryVolt(baterryVolt);
    setOilTemperature(oilTemperature);
    setDate(ctime(&localTime));
}

void PerformanceManagement::showPerformanceStatus(){
    cout << "Horario atual: " << this->getDate()
         << "Temperatura do carro: " << this->getCarTemperature() << " C"
         << "\nVelocidade maxima do carro: " << this->getMaxVelocity() << " Km/h"
         << "\nVelocidade atual do carro: " << this->getVelocity() << " Km/h"
         << "\nRotacao do motor: " << this->getMotorRpm() << " rpm"
         << "\nPressao do Oleo: " << this->getOilPression() << " atm"
         << "\nTemperatura do Oleo: " << this->getOilTemperature() << " C"
         << "\nVoltagem da bateria: " << this->getBaterryVolt() << " Volts" << endl;
    system("pause");
}

void PerformanceManagement::updatePerformanceStatus(){
    this->setCarTemperature(this->getCarTemperature()+20);
    this->setVelocity(this->getVelocity()+100);
    this->setMotorRpm(this->getMotorRpm()+1000);
    this->setOilPression(this->getOilPression()+7);
    this->setOilTemperature(this->getOilTemperature()+5);

    (rand()%(100-1+1) + 1) > 50 ?
    (this->setBaterryVolt(this->getBaterryVolt()-2)):
    (this->setBaterryVolt(this->getBaterryVolt()+2));

    cout << "Acelerando e atualizando dados do sistema..." << endl;
    sleep(3);
}


float PerformanceManagement::getCarTemperature(){
    return carTemperature;
}

void PerformanceManagement::setCarTemperature(float carTemperature) {
    PerformanceManagement::carTemperature = carTemperature;
}

float PerformanceManagement::getMaxVelocity() {
    return maxVelocity;
}

void PerformanceManagement::setMaxVelocity(float maxVelocity) {
    PerformanceManagement::maxVelocity = maxVelocity;
}

float PerformanceManagement::getVelocity(){
    return velocity;
}

void PerformanceManagement::setVelocity(float velocity) {
    PerformanceManagement::velocity = velocity;
}

int PerformanceManagement::getMotorRpm(){
    return motorRPM;
}

void PerformanceManagement::setMotorRpm(int motorRpm) {
    motorRPM = motorRpm;
}

int PerformanceManagement::getBaterryVolt(){
    return baterryVolt;
}

void PerformanceManagement::setBaterryVolt(int baterryVolt) {
    PerformanceManagement::baterryVolt = baterryVolt;
}

float PerformanceManagement::getOilPression(){
    return oilPression;
}

void PerformanceManagement::setOilPression(float oilPression) {
    PerformanceManagement::oilPression = oilPression;
}

float PerformanceManagement::getOilTemperature() {
    return oilTemperature;
}

void PerformanceManagement::setOilTemperature(float oilTemperature) {
    PerformanceManagement::oilTemperature = oilTemperature;
}

char *PerformanceManagement::getDate(){
    return date;
}

void PerformanceManagement::setDate(char *date) {
    PerformanceManagement::date = date;
}
