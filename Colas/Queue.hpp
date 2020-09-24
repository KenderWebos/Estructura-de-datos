#include <iostream>
#include <cstdlib>
#ifndef QUEUE_HPP
#define QUEUE_HPP

struct Nodo
{
   int data;
   struct Nodo *next;
   struct Nodo *previus;
};

class Queue
{
private:
   Nodo *_head;
   Nodo *_tail;
   int _size;

public:
   Queue();
   ~Queue();
   void Enqueue(int);
   void Dequeue();
   bool isempty();
   int size();
   void Displayhead();
   void DisplayTail();
   void DisplayQueue();
};



#endif // !QUEUE_HPP