#include "Conta.h"
#include "iostream"

using namespace std;

        string getNomeCliente();
        int getNumero;
        double getSaldo;

        void setNomeCliente(string);
        void setNumero(int);
        void setSaldo(double);

Conta::Conta()
{
    this->nomeCliente = "DEFAULT";
    this->numero = 0;
    this->saldo = 0;
}

Conta::Conta(string NOMECLIENTE, int NUMERO, double SALDO)
{
    this->nomeCliente = NOMECLIENTE;
    this->numero = NUMERO;
    this->saldo = SALDO;
}

Conta::~Conta()
{
    //dtor
}

string Conta::getNomeCliente(){
    return this->nomeCliente;
}

int Conta::getNumero(){
    return this->numero;
}

double Conta::getSaldo(){
    return this->saldo;
}

void Conta::setNomeCliente(string NOMECLIENTE){
    nomeCliente = NOMECLIENTE;
}

void Conta::setNumero(int NUMERO){
    numero = NUMERO;
}

void Conta::setSaldo(double SALDO){
    saldo = SALDO;
}

void Conta::sacar(double VALORDOSAQUE){
    this->saldo -= VALORDOSAQUE;
}

void Conta::depositar(double VALORDODEPOSITO){
    if((this->saldo - VALORDODEPOSITO) >= 0){
    this->saldo += VALORDODEPOSITO;
    }else{
        cout << "Valor a ser sacado é maior do que o disponível!\n" << endl;
    }
}
