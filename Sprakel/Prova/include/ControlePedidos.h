#ifndef CONTROLEPEDIDOS_H
#define CONTROLEPEDIDOS_H
#include "IControlePedidos.h"
#include "Pedido.h"

using namespace std;

class ControlePedidos : public IControlePedidos
{
    public:
        Pedido pedidos[];
        ControlePedidos();
        virtual ~ControlePedidos();

        void calculaQuantPedidosCliente(string NOMECLIENTE);

        //void adicionaPedido(Pedido, int);
        //Pedido pesquisaPedidoProduto(long);
        //void removerPedido(long);

        //falta implementar estas funções acima

    protected:

    private:
};

#endif // CONTROLEPEDIDOS_H
