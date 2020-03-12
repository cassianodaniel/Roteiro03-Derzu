#include "ContaCorrente.h"
#include "stdio.h"
#include <iostream>

using namespace std;

ContaCorrente::ContaCorrente(){
    this->salario = 0;
    definirLimite();
    setNomeCliente("nome");
    setNumero(0);
    setSaldo(0.0);
}

ContaCorrente::ContaCorrente(double SALARIO, string NOMECLIENTE, int NUMERO, double SALDO){
    this->salario = SALARIO;
    definirLimite();
    setNomeCliente(NOMECLIENTE);
    setNumero(NUMERO);
    setSaldo(SALDO);
}

ContaCorrente::~ContaCorrente()
{
    //dtor
}

double ContaCorrente::getLimite(){
    return this->limite;
}

double ContaCorrente::getSalario(){
    return this->salario;
}

double ContaCorrente::definirLimite(){
    this->limite = salario*2;
}

void ContaCorrente::setSalario(double SALARIO){
    this->salario = SALARIO;
}

void ContaCorrente::print(){
    cout << "Conta Corrente:\n" << endl;
    cout << "Nome: " << nomeCliente << endl;
    cout << "Numero da Conta: " << numero << endl;
    cout << "Saldo: " << saldo << " R$" << endl;
    cout << "Salario: " << salario << " R$" << endl;
    cout << "Limite disponivel: " << this->limite << endl;
}
