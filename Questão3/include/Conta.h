#ifndef CONTA_H
#define CONTA_H
#include "string"

using namespace std;

class Conta
{
    public:
        Conta();
        Conta(string,int,double);
        virtual ~Conta();
        void sacar(double);
        void depositar(double);

        string getNomeCliente();
        int getNumero();
        double getSaldo();

        void setNomeCliente(string);
        void setNumero(int);
        void setSaldo(double);
    protected:
        string nomeCliente;
        int numero;
        double saldo;
    private:
};

#endif // CONTA_H
