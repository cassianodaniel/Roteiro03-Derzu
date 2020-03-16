#include "Horista.h"
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

Horista::Horista()
{
    this->matricula = 0;
    this->nome = ".";
    this->salarioPorHora = 0;
    this->horasTrabalhadas = 0;
}

Horista::Horista(int MATRICULA, string NOME, double SPH, double HT)
{
    this->matricula = MATRICULA;
    this->nome = NOME;
    this->salarioPorHora = SPH;
    this->horasTrabalhadas = HT;
}

double Horista::calculaSalario()
{
    if(horasTrabalhadas > 40){
        return 4 * ((40 * salarioPorHora) + ((horasTrabalhadas - 40) * (salarioPorHora * 1.5)));
    }
    else{
        return 4 * horasTrabalhadas * salarioPorHora;
    }
}

Horista::~Horista()
{
    //dtor
}

void Horista::print(){
        cout << getMatricula() << endl;
        cout << getNome() << endl;
        cout << salarioPorHora << endl;
        cout << horasTrabalhadas << endl;
        cout << calculaSalario() << endl;
}
