#ifndef ITEMDEPEDIDO_H
#define ITEMDEPEDIDO_H

using namespace std;

class ItemDePedido
{
    public:
        ItemDePedido();
        ItemDePedido(int,long,double);

        virtual ~ItemDePedido();

        int quantidade;
        long codProduto;
        double valorUnitario;
    protected:

    private:
};

#endif // ITEMDEPEDIDO_H
