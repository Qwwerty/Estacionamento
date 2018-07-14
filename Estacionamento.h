#ifndef ESTACIONAMENTO_H
#define ESTACIONAMENTO_H
#include <iostream>
#include <time.h>

using namespace std;

class Estacionamento {
    
    private :
        
        string placa;
        time_t tempo_inicial = 0 ,tempo_final = 0;
        tm *tempo_inicial_info = localtime(&tempo_inicial);

        
        void menu();
        
    public:
        Estacionamento();
        virtual ~Estacionamento();
        void PegaHora();
        void HoraFInal();
        void SetPlaca(string placa);
        string GetPlaca();
        
        
        


};

#endif /* ESTACIONAMENTO_H */

