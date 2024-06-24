#include <iostream>
#include "dados.h"
#include "rlutil.h"

using namespace std;


void NumeroDado(int numero, int pos1, int pos2){

  DibujarDado(pos1,pos2);

    rlutil::setColor(rlutil::BLACK);
    rlutil::setBackgroundColor(rlutil::WHITE);

    switch(numero){
    case 1:
        rlutil::locate(pos1+3,pos2+1);
        cout << (char) 254;
    break;

    case 2:
        if(rand()%2){
        rlutil::locate(pos1+1,pos2);
        cout << (char) 220;
        rlutil::locate(pos1+5,pos2+2);
        cout << (char) 223;
        }
        else{
        rlutil::locate(pos1+1,pos2+2);
        cout << (char) 223;
        rlutil::locate(pos1+5,pos2);
        cout << (char) 220;
        }
        break;

     case 3:
        if(rand()%3){
        rlutil::locate(pos1+3,pos2+1);
        cout << (char) 254;
        rlutil::locate(pos1+1,pos2);
        cout << (char) 220;
        rlutil::locate(pos1+5,pos2+2);
        cout << (char) 223;
        }
        else{
        rlutil::locate(pos1+1,pos2+2);
        cout << (char) 223;
        rlutil::locate(pos1+5,pos2);
        cout << (char) 220;
        rlutil::locate(pos1+3,pos2+1);
        cout << (char) 254;
        }
        break;

    case 4:
        rlutil::locate(pos1+1,pos2);
        cout << (char) 220;
        rlutil::locate(pos1+1,pos2+2);
        cout << (char) 223;
        rlutil::locate(pos1+5,pos2);
        cout << (char) 220;
        rlutil::locate(pos1+5,pos2+2);
        cout << (char) 223;
        break;

    case 5:
        rlutil::locate(pos1+3,pos2+1);
        cout << (char) 254;
        rlutil::locate(pos1+1,pos2);
        cout << (char) 220;
        rlutil::locate(pos1+1,pos2+2);
        cout << (char) 223;
        rlutil::locate(pos1+5,pos2);
        cout << (char) 220;
        rlutil::locate(pos1+5,pos2+2);
        cout << (char) 223;
        break;

    case 6:
        if(rand()%6){
        rlutil::locate(pos1+1,pos2);
        cout << (char) 220;
        rlutil::locate(pos1+1,pos2+2);
        cout << (char) 223;
        rlutil::locate(pos1+3,pos2);
        cout << (char) 220;
        rlutil::locate(pos1+3,pos2+2);
        cout << (char) 223;
        rlutil::locate(pos1+5,pos2);
        cout << (char) 220;
        rlutil::locate(pos1+5,pos2+2);
        cout << (char) 223;
        }
        else{
        rlutil::locate(pos1+1,pos2);
        cout << (char) 220;
        rlutil::locate(pos1+1,pos2+1);
        cout << (char) 254;
        rlutil::locate(pos1+1,pos2+2);
        cout << (char) 223;
        rlutil::locate(pos1+5,pos2);
        cout << (char) 220;
        rlutil::locate(pos1+5,pos2+1);
        cout << (char) 254;
        rlutil::locate(pos1+5,pos2+2);
        cout << (char) 223;
        }
        break;
    }
}



void DibujarDado(int pos1, int pos2){
    rlutil::setColor(rlutil::WHITE);
    for(int x=pos1; x<=pos1+6; x++){
        for(int y=pos2; y<=pos2+2; y++){
            rlutil::locate(x,y);
            cout << (char) 219;
              }
    }
}

int TirarDado(int pos1, int pos2){
    int dado = rand()%6+1;

    for(int i=0; i<=10; i++){
    NumeroDado(rand()%6+1, pos1, pos2);
    rlutil::msleep(0.5);
}
    NumeroDado(dado, pos1, pos2);

    return dado;

    }


