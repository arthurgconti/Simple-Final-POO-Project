#include <iostream>
#include <stdlib.h>
#include <string.h>
#include "./Classes/FaultManagement.h"
#include "./Classes/PerformanceManagement.h"
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
    BoardComputer *boardComputer = new BoardComputer(0,300,0,0,110,
                                                     0,0);
    PerformanceManagement *performanceManagement = new PerformanceManagement(boardComputer->getCarTemperature(),
                                                                            boardComputer->getMaxVelocity(),
                                                                            boardComputer->getVelocity(),
                                                                            boardComputer->getMotorRpm(),
                                                                            boardComputer->getBaterryVolt(),
                                                                            boardComputer->getOilPression(),
                                                                            boardComputer->getOilTemperature());


do {
        cout
        <<  "----------------------"
        << "\nComputador de bordo\n"
        <<  "----------------------\n"
        <<  "1) Exibir status atual do carro\n"
        <<  "2) Atualizar dados do sistema\n"
        <<  "3) Sair "
        << endl;
            cin >> option;

        switch (option) {
            case 1: {
                performanceManagement->showPerformanceStatus();
                break;
            }
            case 2: {
                break;
            }
            case 3: {
                break;
            }

        }
    }while(option != 3);




    return 0;
}
