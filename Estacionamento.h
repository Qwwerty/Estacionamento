#ifndef ESTACIONAMENTO_H
#define ESTACIONAMENTO_H
#include <iostream>
#include <time.h>

using namespace std;

class Estacionamento {
    
    private :
        
        string placa;
        void menu();
        
    public:
        Estacionamento();
        virtual ~Estacionamento();
        void PegaHora();
        void SetPlaca(string placa);
        string GetPlaca();
        
        


};

#endif /* ESTACIONAMENTO_H */

