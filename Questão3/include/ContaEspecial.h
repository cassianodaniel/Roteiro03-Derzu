#ifndef CONTAESPECIAL_H
#define CONTAESPECIAL_H
#include "ContaCorrente.h"

class ContaEspecial : public ContaCorrente
{
    public:
        ContaEspecial();
        ContaEspecial(double,string,int,double);
        virtual ~ContaEspecial();
        double definirLimite();
        double getLimite();

        void print();
    protected:

    private:
};

#endif // CONTAESPECIAL_H
