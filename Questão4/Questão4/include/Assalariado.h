#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#include "Funcionario.h"

class Assalariado : public Funcionario{
    public:
        Assalariado();
        virtual ~Assalariado();
        double calculaSalario();
    protected:

    private:
};

#endif // ASSALARIADO_H
