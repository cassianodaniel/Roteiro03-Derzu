
#ifndef PEDIDO_H
#define PEDIDO_H
#include "ItemDePedido.h"
#include "Cliente.h"
#include "string"
using namespace std;

class Pedido
{
    public:
        Pedido();
        Pedido(long, Cliente, ItemDePedido,int indice);
        virtual ~Pedido();

        long numDePedido;
        Cliente cliente;
        ItemDePedido itens[];
        string aux;
        void adicionaItem(ItemDePedido, int);
    protected:

    private:
};

#endif // PEDIDO_H
