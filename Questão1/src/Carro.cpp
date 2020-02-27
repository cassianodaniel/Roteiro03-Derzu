#include "Carro.h"

Carro::Carro()
{
    this->airbag = false;
}

Carro::~Carro()
{
    //dtor
}

Carro::Airbag(bool AIRBAG){
    this->airbag = AIRBAG;
}
