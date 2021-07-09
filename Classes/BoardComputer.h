//
// Created by Arthur Conti on 6/27/2021.
//
#ifndef EP5_BOARDCOMPUTER_H
#define EP5_BOARDCOMPUTER_H
#include <ctime>


class BoardComputer {

protected:
    float carTemperature, maxVelocity, velocity;
    int motorRPM,baterryVolt;
    float oilPression, oilTemperature;
    char* date;

public:
    BoardComputer(float carTemperature, float maxVelocity, float velocity, int motorRpm, int baterryVolt,
                  float oilPression, float oilTemperature);

    char *getDate();

    void setDate(char *date);

    float getCarTemperature();

    void setCarTemperature(float carTemperature);

    float getMaxVelocity();

    void setMaxVelocity(float maxVelocity);

    float getVelocity();

    void setVelocity(float velocity);

    int getMotorRpm();

    void setMotorRpm(int motorRpm);

    int getBaterryVolt();

    void setBaterryVolt(int baterryVolt);

    float getOilPression();

    void setOilPression(float oilPression);

    float getOilTemperature();

    void setOilTemperature(float oilTemperature);
};


#endif //EP5_BOARDCOMPUTER_H
