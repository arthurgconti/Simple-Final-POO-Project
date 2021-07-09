#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "./Classes/BoardComputer.h"
#include <pthread.h>
#include <cstdlib>
#include <ctime>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL,"");
    unsigned seed = time(0);
    srand(seed);

    unsigned int option;
    BoardComputer *boardComputer = new BoardComputer(0,300,0,
                                                     0,110,0,0);


do {
        cout
        <<  "----------------------"
        << "\nComputador de bordo\n"
        <<  "----------------------\n"
        <<  "1) Exibir status atual do carro\n"
        <<  "2) Atualizar dados do sistema\n"
        <<  "3) Exibir falhas detectadas no sistema\n"
        <<  "4) Aliviar o carro\n"
        <<  "5) Sair "
        << endl;
            cin >> option;

        switch (option) {
            case 1: {
                boardComputer->showPerformanceStatus();
                break;
            }
            case 2: {
                boardComputer->updatePerformanceStatus();
                break;
            }
            case 3: {
                boardComputer->showErrorStatus(boardComputer->getMotorRpm(),boardComputer->getVelocity(),
                                               boardComputer->getMaxVelocity(),boardComputer->getOilPression(),
                                               boardComputer->getOilTemperature(),boardComputer->getCarTemperature());
                break;
            }

            case 4: {
                boardComputer->relieveCar();
                break;
            }

            case 5:
                break;

            default:
            {
                cout << "Opcao invalida"<<endl;
                break;
            }
        }
    }while(option != 5);




    return 0;
}
