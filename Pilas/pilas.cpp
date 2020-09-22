#include "pilas.hpp"
#include <iostream>
#include <cstdlib>
pila::pila()
{
    top = NULL;
    _size = 0;
}

pila::~pila()
{
    Nodo *aux;
    while (top)
    {
        aux = top;
        delete top;
        top = aux->next;
    }
    delete aux;
}

void pila::_PushStack(int valor)
{
    Nodo *NuevoNodo = new Nodo;
    NuevoNodo = top;
    NuevoNodo->data = valor;
    NuevoNodo->next = top;
    top = NuevoNodo;
    _size++;
}

void pila::_PopStack()
{
    if (this->_IsEmpty())
    {
        std::cout << "Pila vacia" << std::endl;
    }
    else
    {
        std::cout << "el elemento a eliminar es: " << top->data << std::endl;
        Nodo *aux = top;
        delete top;
        top = aux->next;
        delete aux;
        _size--;
    }
}
int pila::_SizeStack()
{
    return _size;
}

void pila::_Display()
{
    Nodo *aux = top;
    do
    {
        std::cout << aux->data << std::endl;
        aux = aux->next;
    } while (aux == NULL);
}

void pila::_PrintTop()
{
    std::cout << top->data << std::endl;
}

bool pila::_IsEmpty()
{
    return _size == 0;
}