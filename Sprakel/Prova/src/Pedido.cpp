#include "Pedido.h"
#include "Cliente.h"
#include "ItemDePedido.h"

Pedido::Pedido()
{
    this->numDePedido = 0;
    this->cliente = Cliente("Sem cliente/Numero de pedido vazio");
    this->aux = ".";
}

Pedido::Pedido(long NUMDEPEDIDO, Cliente CLIENTE, ItemDePedido ITEMDEPEDIDO,int indice)
{
    this->numDePedido = NUMDEPEDIDO;
    this->cliente = CLIENTE;
    this->itens[indice] = ITEMDEPEDIDO;

}

void Pedido::adicionaItem(ItemDePedido, int){
    //aqui
}

Pedido::~Pedido()
{
    //dtor
}
