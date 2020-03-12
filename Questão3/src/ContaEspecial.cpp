#include "ContaEspecial.h"
#include "iostream"

using namespace std;
ContaEspecial::ContaEspecial()
{
    setSalario(0);
    definirLimite();
    setNomeCliente("nome");
    setNumero(0);
    setSaldo(0.0);
}

ContaEspecial::ContaEspecial(double SALARIO, string NOMECLIENTE, int NUMERO, double SALDO){
    this->salario = SALARIO;
    definirLimite();
    setNomeCliente(NOMECLIENTE);
    setNumero(NUMERO);
    setSaldo(SALDO);
}

ContaEspecial::~ContaEspecial()
{

}

double ContaEspecial::definirLimite(){
    limite = salario*4;
}

double ContaEspecial::getLimite(){
    return limite;
}

void ContaEspecial::print(){
    cout << "Conta Especial:\n" << endl;
    cout << "Nome: " << nomeCliente << endl;
    cout << "Numero da Conta: " << numero << endl;
    cout << "Saldo: " << saldo << " R$" << endl;
    cout << "Salario: " << salario << " R$" << endl;
    cout << "Limite disponivel: " << limite << endl;
}
