#include "Cliente.h"

using namespace std;


Cliente::Cliente()
{
    this->nome = ".";
}

Cliente::Cliente(string NOME)
{
    this->nome = NOME;
}

Cliente::~Cliente()
{

}
