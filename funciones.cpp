#include <iostream>
#include "funciones.h"
#include "dados.h"
#include "rlutil.h"
#include <ctime>
#include <cstdlib>


using namespace std;

//JUEGO UN JUGADOR

void juegoUnJugador()
{
    //PARA QUE EL CURSOR NO APAREZCA
    rlutil::hidecursor();
    //PARA QUE SE VEA EL CORTE DE COLOR
    rlutil::saveDefaultColor();
    ///




    string nombre;
    const int CANT_DADOS = 6;
    int vDados[CANT_DADOS];
    cout << "                                                                    --- JUEGO UN JUGADOR ---                                                                   " << endl << endl;
    cout << "Ingrese el nombre del jugador: ";
    getline(cin, nombre); // Para ingreso de nombre con espacios.

    /// PARA QUE SI O SI INGRESEN UN NOMBRE. -- OPCIONAL
    while(nombre == "")
    {
        cout << "Por favor ingrese un nombre: ";
        getline(cin, nombre);
    }

    cout << "presione cualquier tecla para jugar" << endl;
    system("pause>nul");
    system("cls");
    srand(time(0));
    for(int i=1; i<=6; i++){
        TirarDado(i*10, rand()%10+1);
    }
//REPITO PARA EL CORTE DE COLOR
    rlutil::resetColor();
    rlutil::anykey();
    system("cls");
}

