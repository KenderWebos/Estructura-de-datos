#include "Queue.hpp"
#include <iostream>
#include <cstdlib>

int main(int argc, char const *argv[])
{
    Queue* Cola = new Queue();
    int dato, opcion;   
    char respuesta;

    do
    {
        std::cout << "1.Enqueue" << std::endl;
        std::cout << "2.Dequeue" << std::endl;
        std::cout << "3.Size" << std::endl;
        std::cout << "4.Display Tail" << std::endl;
        std::cout << "5.Display Head" << std::endl;
        std::cout << "6.Display Queue" << std::endl;
        std::cout << "7.Is Empty ?" << std::endl
                  << std::endl;
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion)
        {
        case 1:
            std::cout << "ingrese un dato:";
            std::cin >> dato;
            Cola->Enqueue(dato);
            break;

        case 2:
            Cola->Dequeue();
            break;

        case 3:
            std::cout << Cola->size() << std::endl;
            break;

        case 4:
            Cola->DisplayTail();
            break;

        case 5:
            Cola->Displayhead();
            break;

        case 6:
            Cola->DisplayQueue();
            break;
        case 7:
            std::cout << Cola->isempty() << std::endl;
        default:
            std::cout << "Seleccione una opcion correcta" << std::endl;
            break;
        }
        std::cout << "Desea ingresar nuevamente una opcion? (Y/N) :" << std::endl;
        std::cin >> respuesta;
    } while (respuesta == 'Y' || respuesta == 'y');
    return 0;
}
