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
    
    tempo_inicial = mktime(tempo_inicial_info);
    
}

void Estacionamento::HoraFInal(){
    
    //Pega o tempo final
    tm *tempo_final_info = localtime(&tempo_final);
    tempo_final = mktime(tempo_final_info);
    
    double diferenca = difftime(tempo_final, tempo_inicial);
    cout << "Diferenca: " << diferenca <<endl;
    
    
}


//====================Set==============================
void Estacionamento::SetPlaca(string placa){
    this->placa = placa;
}
string Estacionamento::GetPlaca(){
    return placa;
}




