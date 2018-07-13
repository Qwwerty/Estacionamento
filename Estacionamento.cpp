#include "Estacionamento.h"
#include <iostream>
#include <time.h>

using namespace std;

Estacionamento::Estacionamento() {
}

Estacionamento::~Estacionamento() {
}

//Ainda a ser manipulado, para pegar hora de entrada e saida dos veiculos.
void Estacionamento::PegaHora(){
    
    time_t rawTime;
    struct tm *timeinfo;
    time(&rawTime);
    timeinfo = localtime(&rawTime);
    cout << asctime(timeinfo);
    
}



//====================Set==============================
void Estacionamento::SetPlaca(string placa){
    this->placa = placa;
}
string Estacionamento::GetPlaca(){
    return placa;
}




