/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Screen.cpp
 * Author: qwerty
 * 
 * Created on 12 de Julho de 2018, 17:10
 */

#include "Screen.h"
#include "Estacionamento.h"
#include "bancoDedados.h"
#include <iostream>
#include <memory>

using namespace std;

Screen::Screen() {
}

Screen::~Screen() {
}

//Menu do programa onde ira apresentar o que pode ser feito com o programa.
void Screen::Menu() {

    int resp = 1;
    
    //Enquanto a resp for diferente  de 0 o programa vai continuar a ser executado
    while (resp != 0) {
        system("clear");
        cout << "YOU'RE WELCOME!!\n\n" << endl;
        cout << "1 -  INSERT VEHICLE PLATE\n" << endl;
        cout << "2 -  SEARCH VEHICLE PLATE\n" << endl;
        cout << "0 -  EXIT\n" << endl;
        cout << "CHOOSE OPTION: " << endl;
        cin >> resp;

        switch (resp) {

            case 0:
            {
                system("clear");
                cout << "\t\tTHANK YOU!!\n";
                break;
            }
            case 1:
            {
                //Objeto da classe Estacionamento para poder ser usado para dar set na placa do veiculo.
                Estacionamento *ObjectPlate = new Estacionamento();
                //Objeto da classe BancoDedados  para poder ser usado para usar a funçao inserir.
                bancoDedados *connection = new bancoDedados();
                
                //Recebe a placa.
                string plate;

                cout << "INSERT TO VEHICLE PLATE: " << endl;
                cin >> plate;
                ObjectPlate->SetPlaca(plate);
                connection->Inserir(plate);
                //Apenas da um pause na tela, para o usuario ver que ocorreu tudo bem.
                cin.ignore().get();
                break;
            }
            case 2:
            {
                //Objeto da classe Estacionamento para poder ser usado para dar set na placa do veiculo.
                Estacionamento *ObjectPlate = new Estacionamento();
                //Objeto da classe BancoDedados  para poder ser usado para usar a funçao inserir.
                bancoDedados *connection = new bancoDedados();
                
                //Recebe a placa.
                string plate;

                cout << "SEARCH VEHICLE PLATE: " << endl;
                cin >> plate;
                ObjectPlate->SetPlaca(plate);
                connection->Buscar(plate);
                
                //Apenas da um pause na tela, para o usuario ver que ocorreu tudo bem.
                cin.ignore().get();
                
                //Segundo menu
                string aux;
                cout << "DESEJA RETIRAR O VEICULO:  (SIM/NAO)" << endl;
                cin >> aux;
                toupper(aux);
                
                
                if(aux == "SIM"){
                    connection->Deletar(plate);
                }
                
                break;
            } 
              default:{
                break;  
              }
        }
    }
}