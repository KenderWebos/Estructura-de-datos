#ifndef PILAS_HPP
#define PILAS_HPP

struct Nodo{
    int data;
    struct Nodo* next;
};

class pila
{
private:
    Nodo *top;
    int _size;
public:
    pila();
    ~pila();
    void _PushStack(int);
    void _PopStack();
    int _SizeStack();
    void _Display();
    void _PrintTop();
    bool _IsEmpty();
};

#endif // !PILAS_HPP
