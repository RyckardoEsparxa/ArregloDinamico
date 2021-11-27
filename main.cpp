#include <iostream>
#include "ArregloDinamico.h"

using namespace std;

int main(){

    ArregloDinamico arreglo;
    arreglo.insertar_final("Hola");
    arreglo.insertar_final("Bienvenid@");
    arreglo.insertar_final("a la actividad");
    arreglo.insertar_final("numero 7");
    arreglo.insertar_final("de la materia");
    arreglo.insertar_final("de Estructura de Datos I");
    arreglo.insertar_final("con el profesor");
    arreglo.insertar_final("Michel Davalos Boites");
    arreglo.insertar_final("8");
    arreglo.insertar_final("8");
    arreglo.insertar_final("8");
    arreglo.insertar_final("8");
    arreglo.insertar_final("8");
    // arreglo.insertar_final("8");
    // arreglo.insertar_final("8");
    arreglo.insertar_inicio("Dinamico");   
    arreglo.insertar_inicio("Arreglo");           

    for(size_t i = 0; i < arreglo.size(); i++){
        cout << arreglo[i] << " " << endl;
    }

    return 0;
}