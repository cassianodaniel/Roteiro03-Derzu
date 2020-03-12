#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include "string"

using namespace std;

class Funcionario
{
    public:
        Funcionario();
        virtual ~Funcionario();
        string getNome();
        int getMatricula();
        void setMatricula(int MATRICULA);
        void setNome(string NOME);

        virtual double calculaSalario() = 0; //cpp sem declara��o de calculasalario() porque est� estanciado [ = 0 ]; a inst�ncia condiz no fato de n�o criar um objeto na main desta classe, ou seja: Funcionario(string,int) n�o teria sentido
        //j� que Funcionario � apenas uma classe abstrata para outros tr�s tipos de FUNCION�RIOS que v�o ser implementados posteriormente
    protected:
        string nome;
        int matricula;
    private:
};

#endif // FUNCIONARIO_H
