#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include "Conta.h"

class ContaCorrente : public Conta
{
    public:
        ContaCorrente();
        ContaCorrente(double,string,int,double);
        virtual ~ContaCorrente();

        virtual double definirLimite();

        double getSalario();
        virtual double getLimite();

        void setSalario(double);

        virtual void print();

    protected:
        double salario;
        double limite;
    private:
};

#endif // CONTACORRENTE_H
