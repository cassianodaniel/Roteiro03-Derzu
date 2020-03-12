#include "Poupanca.h"
#include "stdio.h"
#include <iostream>

using namespace std;

Poupanca::Poupanca()
{
    this->variacao = 0;
    this->taxaRendimento = 0;
}

Poupanca::Poupanca(string NOMEDOCLIENTE, int NUMERO, int VARIACAO, double TAXARENDIMENTO, double SALDO)
{
    setNomeCliente(NOMEDOCLIENTE);
    setNumero(NUMERO);
    setSaldo(SALDO);
    this->variacao = VARIACAO;
    this->taxaRendimento = TAXARENDIMENTO;
}

double Poupanca::render(){
    if(variacao == 51){
        return (taxaRendimento / 100) * saldo;
    }else if(variacao == 1){
        return ((taxaRendimento / 100) + (0,5 / 100)) * saldo;
    }else{
        return -1; //FLAG
    }
}

Poupanca::~Poupanca()
{
    //dtor
}

int Poupanca::getVariacao(){
    return variacao;
}

double Poupanca::getTaxaDeRendimento(){
    return taxaRendimento;
}

void Poupanca::setVariacao(int VARIACAO){
    if(VARIACAO < 0){
        variacao = 0;
    }else{
        variacao = VARIACAO;
    }
}

void Poupanca::setTaxaDeRendimento(double TAXADERENDIMENTO){
    if(TAXADERENDIMENTO < 0){
        taxaRendimento = 0;
    }else{
        taxaRendimento = TAXADERENDIMENTO;
    }
}

void Poupanca::print(){
    cout << "Poupanca:\n" << endl;
    cout << "Nome: " << nomeCliente << endl;
    cout << "Numero da Conta: " << numero << endl;
    cout << "Taxa de rendimento:" << taxaRendimento << endl;
    cout << "Variacao: " << variacao << endl;
    cout << "Funcao render: " << render() << endl;
}
