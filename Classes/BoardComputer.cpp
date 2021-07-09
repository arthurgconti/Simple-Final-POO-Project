//
// Created by Arthur Conti on 6/27/2021.
//

#include "BoardComputer.h"

using namespace std;

BoardComputer::BoardComputer(float carTemperature, float maxVelocity, float velocity, int motorRpm, int baterryVolt,
                             float oilPression, float oilTemperature){
    time_t localTime = time(NULL);

    setCarTemperature(carTemperature);
    setMaxVelocity(maxVelocity);
    setMotorRpm(motorRpm);
    setOilPression(oilPression);
    setBaterryVolt(baterryVolt);
    setOilTemperature(oilTemperature);
    setDate(ctime(&localTime));
}


float BoardComputer::getCarTemperature(){
    return carTemperature;
}

void BoardComputer::setCarTemperature(float carTemperature) {
    BoardComputer::carTemperature = carTemperature;
}

float BoardComputer::getMaxVelocity() {
    return maxVelocity;
}

void BoardComputer::setMaxVelocity(float maxVelocity) {
    BoardComputer::maxVelocity = maxVelocity;
}

float BoardComputer::getVelocity(){
    return velocity;
}

void BoardComputer::setVelocity(float velocity) {
    BoardComputer::velocity = velocity;
}

int BoardComputer::getMotorRpm(){
    return motorRPM;
}

void BoardComputer::setMotorRpm(int motorRpm) {
    motorRPM = motorRpm;
}

int BoardComputer::getBaterryVolt(){
    return baterryVolt;
}

void BoardComputer::setBaterryVolt(int baterryVolt) {
    BoardComputer::baterryVolt = baterryVolt;
}

float BoardComputer::getOilPression(){
    return oilPression;
}

void BoardComputer::setOilPression(float oilPression) {
    BoardComputer::oilPression = oilPression;
}

float BoardComputer::getOilTemperature() {
    return oilTemperature;
}

void BoardComputer::setOilTemperature(float oilTemperature) {
    BoardComputer::oilTemperature = oilTemperature;
}

char *BoardComputer::getDate(){
    return date;
}

void BoardComputer::setDate(char *date) {
    BoardComputer::date = date;
}
