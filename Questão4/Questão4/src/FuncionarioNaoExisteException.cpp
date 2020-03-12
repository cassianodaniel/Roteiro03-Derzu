#include "FuncionarioNaoExisteException.h"
#include <stdio.h>
#include <exception>

FuncionarioNaoExisteException::FuncionarioNaoExisteException()
{
    puts("Funcionário não existe");
}

FuncionarioNaoExisteException::~FuncionarioNaoExisteException()
{
    //dtor
}
