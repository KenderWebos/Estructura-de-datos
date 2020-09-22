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
        free(top);
        top = aux->next;
    }
    free(aux);
}

void pila::_PushStack(int valor)
{
    Nodo *NuevoNodo;
    NuevoNodo = (Nodo *)malloc(sizeof(Nodo));
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
        free(top);
        top = aux->next;
        free(aux);
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
    while (aux != NULL)
    {
        std::cout << aux->data << std::endl;
        aux = aux->next;
    }
    
}

void pila::_PrintTop()
{
    std::cout << top->data << std::endl;
}

bool pila::_IsEmpty()
{
    return _size == 0;
}