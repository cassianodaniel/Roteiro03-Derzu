#ifndef HORISTA_H
#define HORISTA_H
#include "Funcionario.h"
#include <string.h>

class Horista : public Funcionario
{
    public:
        Horista();
        Horista(int MATRICULA, string NOME, double SPH,double HT);
        virtual ~Horista();
        double salarioPorHora;
        double horasTrabalhadas;

        double calculaSalario();

        void print();
    protected:

    private:
};


#endif // HORISTA_H
