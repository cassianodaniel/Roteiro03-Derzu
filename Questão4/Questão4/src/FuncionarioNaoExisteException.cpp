#include "FuncionarioNaoExisteException.h"
#include <stdio.h>
#include <exception>

FuncionarioNaoExisteException::FuncionarioNaoExisteException()
{
    puts("Funcion�rio n�o existe");
}

FuncionarioNaoExisteException::~FuncionarioNaoExisteException()
{
    //dtor
}
