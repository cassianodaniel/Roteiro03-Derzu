//O conceito de polimorfismo é a capacidade de classes mesclarem seus métodos e atributos entre eles.
//Então, é possível criar vários leques de derivacao de objetos.
#include <iostream>
#include "Automovel.h"
#include "Carro.h"

using namespace std;

int main()
{
    Carro c1;
    c1.buzina = true;
    c1.velocidade = 20.0;
    c1.airbag = true;
    cout << c1.buzina << endl; //buzina é da classe automóvel
    cout << c1.velocidade << endl; //velocidade é da classe automóvel
    cout << c1.airbag << endl; //airbag é da classe carro
}
