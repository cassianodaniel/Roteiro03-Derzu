#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
#include <vector>
using namespace std;

class Cliente
{
    public:
        Cliente();
        Cliente(string);

        virtual ~Cliente();

        string nome;
    protected:

    private:
};

#endif // CLIENTE_H
