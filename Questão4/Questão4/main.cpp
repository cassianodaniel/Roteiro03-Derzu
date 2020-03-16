#include <iostream>
#include "SistemaGerenciaFolha.h"
#include "Assalariado.h"
#include "Horista.h"
#include "Comissionado.h"

using namespace std;

int main()
{
    Funcionario *f1 = new Assalariado(1,"Daniel", 10000);
    Funcionario *f2 = new Comissionado(2,"Paulo",2000,10,20);
    Funcionario *f3 = new Horista(3,"Horista",100,10);

    SistemaGerenciaFolha *folha1 = new SistemaGerenciaFolha(75300);
    folha1->setFuncionario(f1);
    folha1->setFuncionario(f2);
    folha1->setFuncionario(f3);

    cout << f1->getMatricula() << endl;
    cout << f1->getNome() << endl;
    cout << f2->getMatricula() << endl;
    cout << f2->getNome() << endl;
    cout << f3->getMatricula() << endl;
    cout << "Teste!" << endl;

	//Tive estes problemas com bad.alloc:

    try{
    	cout << "\nO valor total da folha: " << folha1->calculaValorTotalFolha();
	}catch(OrcamentoEstouradoException e){
    }

    try{
		cout << "\nO salario: " << folha1->consultaSalarioFuncionario("Daniel");
	}catch(FuncionarioNaoExisteException e){
	}

	cout << "Bad-alloc também:" << f1->calculaSalario();
    return 0;
}
