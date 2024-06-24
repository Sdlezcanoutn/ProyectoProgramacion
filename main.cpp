#include <iostream>
#include "funciones.h"
#include "rlutil.h"
#include "dados.h"
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{




         //MENU
    int opcion;

    do{
        cout << " ************************************************************* BIENVENIDO/OS A CIEN O ESCALERA *************************************************************" << endl;
        system("pause>nul");
        system("cls");
        cout << "                                                                   ---------- MENU ----------                                                                  " << endl << endl;
        cout << endl << "Ingrese una opcion: " << endl;
        cout << "1. MODO 1 JUGADOR" << endl;
        cout << "2. MODO 2 JUGADORES" << endl;
        cout << "3. PUNTAJE MAS ALTO" << endl;
        cout << "4. SALIR" << endl << endl;

        cin >> opcion;
        cin.ignore(); // Para que el Enter del cin anterior no quede en el buffer y no lo tome el getline posterior.

        switch (opcion){
        case 1:
        system("cls");
        juegoUnJugador();
        break;
        case 2:
        system("cls");
        //juegoDosJugadores();
        break;
        case 3:
        system("cls");
        //puntuacionMasAlta();
        break;
        case 4:
        system("cls");
        cout << "                                                                              ¡ADIOS! NOS VEMOS PRONTO                                                                              " << endl;
        system("pause>nul");
        system("cls");
        break;
        default:
        cout << endl;
        cout << "OPCION INVALIDA." << endl << endl;
        cout << "Presione una tecla para volver a menu principal...";
        system("pause>nul");
        system("cls");
        }
    }while (opcion != 4);









    return 0;
}


