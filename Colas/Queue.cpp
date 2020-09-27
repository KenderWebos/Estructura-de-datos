#include "Queue.hpp"
#include <iostream>
#include <cstdlib>

Queue::Queue()
{
   _head = NULL;
   _tail = NULL;
   _size = 0;
}

Queue::~Queue()
{
   Nodo *aux = _head;
   while (aux != NULL)
   {
      delete aux;
      aux = aux->previus;
   }
}

void Queue::Enqueue(int value)
{
   Nodo *newnode = new Nodo();
   newnode->data = value;
   newnode->next = NULL;
   newnode->previus = NULL;
   if (this->isempty())
   {
      _head = newnode;
      _tail = newnode;
      _size++;
   }
   else
   {
      newnode->next = _tail;
      _tail->previus = newnode;
      _tail = newnode;
      _size++;
   }
}

void Queue::Dequeue()
{
   Nodo *aux = _head->previus;
   aux->next = NULL;
   delete _head;
   _head = aux;
   _size--;
}

bool Queue::isempty()
{
   return (_tail == NULL && _head == NULL && _size == 0);
}

int Queue::size()
{
   return _size;
}

void Queue::Displayhead()
{
   std::cout << _head->data << std::endl;
}

void Queue::DisplayTail()
{
   std::cout << _tail->data << std::endl;
}

void Queue::DisplayQueue()
{
   Nodo *aux = _tail;
   std::cout << "Cola ";
   while (aux != NULL)
   {
      std::cout << aux->data << " ";
      aux = aux->next;
   }
   std::cout << " Frente" << std::endl;
}