#ifndef FUNCIONARIONAOEXISTEEXCEPTION_H
#define FUNCIONARIONAOEXISTEEXCEPTION_H
#include <iostream>
#include <exception>

using namespace std;

class FuncionarioNaoExisteException : public exception
{
    public:
        FuncionarioNaoExisteException();
        virtual ~FuncionarioNaoExisteException();

    protected:

    private:
};

#endif // FUNCIONARIONAOEXISTEEXCEPTION_H
