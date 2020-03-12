#ifndef POUPANCA_H
#define POUPANCA_H
#include "Conta.h"

class Poupanca : public Conta
{
    public:
        Poupanca();
        Poupanca(string,int,int,double, double);
        virtual ~Poupanca();
        double render();

        int getVariacao();
        double getTaxaDeRendimento();

        void setVariacao(int);
        void setTaxaDeRendimento(double);

        void print();
    protected:

    private:
        int variacao;
        double taxaRendimento;
};

#endif // POUPANCA_H
