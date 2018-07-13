#ifndef BANCODEDADOS_H
#define BANCODEDADOS_H

#include <mysql/mysql.h>


using namespace std;

class bancoDedados {

    private:
    
        MYSQL connection;
        MYSQL_RES  *result;
        MYSQL_ROW linha;
        
        
    public:
        void inserir(string plate);
        void buscar(string plate);
        bancoDedados();
        virtual ~bancoDedados();

};

#endif /* BANCODEDADOS_H */

