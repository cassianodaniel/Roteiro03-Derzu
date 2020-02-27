#include "Conta.h"

Conta::Conta(){
    this->nomeCliente = "";
    this->limite = 0;
    this->numeroConta = 0;
    this->saldo = 0;
    this->salarioMensal = 0;
}

Conta::Conta(string NOMECLIENTE,double SALDO,int NUMEROCONTA,double SALARIOMENSAL) : Conta()
{
    this->nomeCliente = NOMECLIENTE;
    this->saldo = SALDO;
    this->numeroConta = NUMEROCONTA;
    this->salarioMensal = SALARIOMENSAL;
    definirLimite();
}

void Conta::definirLimite(){
    this->limite = this->salarioMensal*2;
}

void Conta::depositar(double VALOR){
    this->saldo += VALOR;
}

void Conta::sacar(double VALOR){
    this->saldo -= VALOR;
}

Conta::~Conta()
{
    //dtor
}
