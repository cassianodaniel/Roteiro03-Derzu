#include "Automovel.h"

Automovel::Automovel()
{
    this->buzina = false;
    this->velocidade = 0.0;
}

Automovel::Buzina(bool BUZINA){
    this->buzina = BUZINA;
}

Automovel::Velocidade(double VELOCIDADE){
    this->velocidade = VELOCIDADE;
}

Automovel::~Automovel()
{
    //dtor
}
