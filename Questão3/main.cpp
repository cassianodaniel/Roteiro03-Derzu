#include <iostream>
#include "Conta.h"
#include "ContaCorrente.h"
#include "ContaEspecial.h"
#include "Poupanca.h"

using namespace std;

int main(){
    ContaEspecial *conta1 = new ContaEspecial(1000,"Paulo",1,2000);
    ContaCorrente *conta2 = new ContaCorrente(3000,"Pedro",2,3000);
    Poupanca *conta3 = new Poupanca("Daniel",3,51,23,15);
    conta1->print();
    conta2->print();
    conta3->print();

    return 0;
}
