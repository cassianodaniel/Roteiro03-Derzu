#ifndef CARRO_H
#define CARRO_H
#include "Automovel.h"

//CARROS CONTÊM AIRBAG;

class Carro : public Automovel
{
    public:
        Carro();
        virtual ~Carro();
        bool airbag;
        Airbag(bool);
    protected:

    private:
};

#endif // CARRO_H
