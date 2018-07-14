#include <iostream>
#include <cstring>
#include "mysql/mysql.h"
#include "bancoDedados.h"
#include "Estacionamento.h"
#include "stdio.h"

using namespace std;

bancoDedados::bancoDedados() {
}

bancoDedados::~bancoDedados() {
}

void bancoDedados::Inserir(string plate){
    
    //Starting connection with database
    mysql_init(&connection);
    
    //Verification connection
    if(mysql_real_connect(&connection, "127.0.0.1", "root", "rhalf4561", "estacionamento", 0, NULL, 0)){
            
        cout << "CONNECTION SUCCESS!!!\n";
    
    }
    else
        cout << "ERROR CONNECTION WITH DATABASE!!!\n" << mysql_error(&connection) << endl;
    
    
    string query = "INSERT INTO carros values(default, '" +plate+"');";
    char dados[query.length()];
    strcpy(dados, query.c_str());
    if(mysql_query(&connection, dados))
        cout << "SUCCESS IN TO INSERT!!!\n";
    mysql_close(&connection);
    
}

void bancoDedados::Buscar(string plate){
    
    mysql_init(&connection);
    
    if(mysql_real_connect(&connection, "127.0.0.1", "root", "rhalf4561", "estacionamento", 0, NULL, 0)){
            
        cout << "CONNECTION SUCCESS!!!\n";
    }
    else
        cout << "ERROR CONNECTION WITH DATABASE!!!\n" << mysql_error(&connection) << endl;
    
    string query = "select placa from carros where placa = '" + plate +"';";
    char dados[query.length()];
    strcpy(dados, query.c_str());
    
    if(mysql_query(&connection, dados))
        cout << "\nBUSCA COM SUCESSO!!!\n";
    
    result = mysql_store_result(&connection);
    if((linha = mysql_fetch_row(result)))
            cout << "ENCONTRADO COM SUCESSO!!\n"<< endl;
    //puts(linha[0]);
    
    
    
}

void bancoDedados::Deletar(string plate){
    
    mysql_init(&connection);
    
    if(mysql_real_connect(&connection, "127.0.0.1", "root", "rhalf4561", "estacionamento", 0, NULL, 0)){
        string query = "delete placa from carros where placa = '" + plate"';";
        
        char dados[query.length()];
        strcpy(dados, query.c_str());
        
        if(mysql_query(&connection, dados)){
                cout << "DELETADO COM SUCESSO!!!\n";
        }
    }
    mysql_close(&connection);
    
}