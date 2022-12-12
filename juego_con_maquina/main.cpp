#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    srand(time(0));

    bool iniciar = true;

    //JUEGO....
    int numero1, numero2, resultado;
    int usuario_resultado;
    int puntaje_usuario = 0, puntaje_maquina = 0;


    while(iniciar){
        system("clear");
        cout << "*************************************************" << endl;
        cout << "*  PUNTAJE USUARIO:  " << puntaje_usuario << endl;
        cout << "*  PUNTAJE MAQUINA:  " << puntaje_maquina << endl;
        cout << "**************************************************" << endl;

        numero1 = rand()%10;
        numero2 = rand()%10;

        resultado = numero1 + numero2;

        cout << "Resuelve la operacion: " << endl;
        cout << numero1 << " + " << numero2 << " = ?" << endl;

        cout << "\n Tu resultado = "; cin >> usuario_resultado;

        if(usuario_resultado){
            if(usuario_resultado == resultado){
                puntaje_usuario += 1;
            }else{
                puntaje_maquina += 1;
            }
        }else{
            break;
        }
    }

    return 0;
}
