#include "pilas.hpp"
#include <iostream>
#include <cstdlib>
pila::pila()
{
    this->top = NULL;
}

pila::~pila()
{
    delete this->top;
}

void pila::_PushStack(int valor)
{
    Nodo *NuevoNodo = new Nodo();
    NuevoNodo = this->top;
    NuevoNodo->data = valor;
    NuevoNodo->next = this->top;
    this->top = NuevoNodo;
}

void pila::_PopStack()
{
    if (_IsEmpty())
    {
        std::cout << "Pila vacia" << std::endl;
    }
    else
    {
        std::cout << "el elemento a eliminar es: " << this->top->data << std::endl;
        Nodo *aux = this->top;
        aux = aux->next;
        this->top = aux;
        delete aux;
    }
}
int pila::_SizeStack()
{
    int contador = 0;
    Nodo *aux = this->top;
    do
    {
        contador++;
        aux = aux->next;
    } while (aux == NULL);
    return contador;
}

void pila::_Display()
{
    Nodo *aux = this->top;
    do
    {
        std::cout << aux->data << std::endl;
        aux = aux->next;
    } while (aux == NULL);
}

void pila::_PrintTop()
{
    std::cout << this->top->data << std::endl;
}

bool pila::_IsEmpty()
{
    return this->top == NULL;
}