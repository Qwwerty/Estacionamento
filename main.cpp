#include <iostream>
#include "Estacionamento.h"
#include "bancoDedados.h"
#include "Screen.h"

/*
    --  Programa feito em C++ com Orientaçao a objetos
 *  --  Name: Rhalf Souza de oliveira
 
 */


using namespace std;

int main() {
    
    //Instancia da tela que ira chamar o menu
    Screen *objeto = new Screen();
    objeto->Menu();

    return 0;
}

