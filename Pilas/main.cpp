#include <iostream>
#include <cstdlib>
#include "pilas.hpp"

int main(int argc, char const *argv[])
{
    pila Stack;
    int dato, opcion;
    char respuesta;

    do
    {
        std::cout << "1.Push" << std::endl;
        std::cout << "2.Pop" << std::endl;
        std::cout << "3.Size" << std::endl;
        std::cout << "4.Display Stack" << std::endl;
        std::cout << "5.Display Top" << std::endl;
        std::cout << "6.Is Empty ?" << std::endl
                  << std::endl;
        std::cout << "Seleccione una opcion: ";
        std::cin >> opcion;

        switch (opcion)
        {
        case 1:
            std::cout << "ingrese un dato:";
            std::cin >> dato;
            Stack._PushStack(dato);
            break;

        case 2:
            Stack._PopStack();
            break;

        case 3:
            std::cout << Stack._SizeStack() << std::endl;
            break;

        case 4:
            Stack._Display();
            break;

        case 5:
            Stack._PrintTop();
            break;

        case 6:
            Stack._IsEmpty();
            break;

        default:
            std::cout << "Seleccione una opcion correcta" << std::endl;
            break;
        }
        std::cout << "Desea ingresar nuevamente una opcion? (Y/N) :" << std::endl;
        std::cin >> respuesta;
    } while (respuesta == 'Y' || respuesta == 'y');
    return 0;
}
