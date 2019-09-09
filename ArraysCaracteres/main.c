#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define T 5

/**
    system("clear");
    system("read -p 'Press Enter to continue...' var");
*/

///     SILLAS DEL AULA

int main()
{
    int arraySillas[T];
    int maximo;
    int minimo;

///inicializarlos con -1 duh!

    inicializarArray(arraySillas,T,-1);
    mostrarArray(arraySillas,T);

///Hardcodeo el array

    cargarArrayHardcode(arraySillas,T);
    mostrarArray(arraySillas,T);

///Pido Maximo y minimo

    maximo=dameElMaximo(arraySillas,T);
    printf("El maximo es:%d\n",maximo);//55
    minimo=dameElMinimo(arraySillas,T);
    printf("El minimo es:%d\n",minimo);//11

///Busco un lugar Libre



if(ocuparSilla(arraySillas,T,4,-1)==-1)
{

    printf("no se pudo\n");

}
else
{

    printf("ok\n");

}





    return 0;
}
