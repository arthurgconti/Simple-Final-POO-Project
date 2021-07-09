//
// Created by Arthur Conti on 6/26/2021.
//

#include "FaultManagement.h"
#include <iostream>

void FaultManagement::showErrorStatus(int RPM,float velocity,float maxVelocity,int oilPressure, int oilTemperature,
                                      int carTemperature){

    if (RPM > 7000)
        alertMotorRotationFault(1);
    else if (RPM < 7000 && RPM >5000)
        alertMotorRotationFault(2);

    if (velocity > maxVelocity)
        alertMaxVelocity(1);
    else if (velocity < maxVelocity && velocity >(maxVelocity*0.7))
        alertMaxVelocity(2);

    if (oilPressure > 20)
        alertOilPressure(1);
    else if (oilPressure < 20 && oilPressure >10)
        alertOilPressure(2);

    if (oilTemperature > 50)
        alertOilTemperature(1);
    else if (oilTemperature < 50 && oilTemperature > 30)
        alertOilTemperature(2);


    if (carTemperature > 40)
        alertCarTemperature(1);
    else if (carTemperature < 40 && carTemperature >20)
        alertCarTemperature(2);




}

void FaultManagement::alertMotorRotationFault(int status){
    switch (status) {
        case 1:{
            std::cout << "ALERTA!!!\nAs rotacoes do estao muito altas, pare o carro imediatamente" << std::endl;
            break;
        }

        case 2:{
            std::cout << "ALERTA!!\nAs rotacoes estao ficando muito altas, e recomendado parar de acelerar" << std::endl;
            break;
        }

    }

}
void FaultManagement::alertMaxVelocity(int status){
    switch (status) {
        case 1:{
            std::cout << "ALERTA!!!\nA velocidade ultrapassou a velocidade maxima, risco se continuar, pare imediatamente" << std::endl;
            break;
        }

        case 2:{
            std::cout << "ALERTA!!\nA velocidade esta chegando perto do limite, fique atento e diminua se possivel" << std::endl;
            break;
        }

    }
}
void FaultManagement::alertOilPressure(int status){
    switch (status) {
        case 1:{
            std::cout << "ALERTA!!!\nA pressao do oleo esta MUITO alta, pare imediatamente" << std::endl;
            break;
        }

        case 2:{
            std::cout << "ALERTA!!\nA pressoa do oleo esta ficando muito alta, recomendamos procurar um mecanico" << std::endl;
            break;
        }

    }
}
void FaultManagement::alertOilTemperature(int status){
    switch (status) {
        case 1:{
            std::cout << "ALERTA!!!\nA temperatuda do oleo esta muito alta, pare o carro imediatamente" << std::endl;
            break;
        }

        case 2:{
            std::cout << "ALERTA!!\nA temperatuda do oleo esta ficando alta, recomendado parar e procurar um mecanico" << std::endl;
            break;
        }
    }
}
void FaultManagement::alertCarTemperature(int status){
    switch (status) {
        case 1:{
            std::cout << "ALERTA!!!\nA temperatura do carro esta muito alta, pare o carro imediatamente para nao fundir o motor" << std::endl;
            break;
        }

        case 2:{
            std::cout << "ALERTA!!\nA temperatura do carro esta ficando alta, recomendado parar e esperar" << std::endl;
            break;
        }

    }
}