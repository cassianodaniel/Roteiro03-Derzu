#ifndef ICONTROLEPEDIDOS_H
#define ICONTROLEPEDIDOS_H
#include "Pedido.h"

using namespace std;

class IControlePedidos
{
    public:
        IControlePedidos();
        virtual ~IControlePedidos();

        virtual void adicionaPedido(Pedido, int) = 0;
        virtual Pedido pesquisaPedidoProduto(long) = 0;
        virtual void removerPedido(long) = 0;


    protected:

    private:
};

#endif // ICONTROLEPEDIDOS_H
