#include <iostream>
#include "libro.h"
#include "articulo.h"
#include "bibliografia.h"

using namespace std;

int main()
{
    int opc;
    Bibliografia b;
    do{
        cout<<"1) Agregar un Libro"<<endl;
        cout<<"2) Agregar un Articulo"<<endl;
        cout<<"3) Imprimir Referencias"<<endl;
        cout<<"4) Salir"<<endl;

        cout<<"Ingrese la opcion: ";
        cin>>opc;
        switch(opc){
        case 1:
            b.agregarLibro();
            break;
        case 2:
            b.agregarArticulo();
            break;
        case 3:
            b.imprimirReferencias();
            break;
        }
    }while(opc!=4);



    return 0;
}
