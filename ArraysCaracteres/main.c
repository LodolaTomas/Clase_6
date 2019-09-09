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
    int ocupadas;
    int libres;
    int primerIndice;

///inicializarlos con -1 duh!

    inicializarArray(arraySillas,T,-1);
    mostrarArray(arraySillas,T);
/*
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
*/
///Cantidad Ocupadas

    ocupadas=cantidadOcupadas(arraySillas,T,-1);
    printf("La cantidad de lugares ocupados es: %d\n",ocupadas);


///Cantidad Libres

    libres=cantidadLibres(arraySillas,T,-1);
    printf("la cantiada de lugares libres es: %d\n",libres);

///Indice de la Primera Libre, SI HÁY

    if(indiceDeLaPrimeraLibre(arraySillas,T,-1)==-1)
    {
        printf("NO HAY LUGAR LIBRE\n");
    }
    else
    {
    primerIndice=indiceDeLaPrimeraLibre(arraySillas,T,-1);
    printf("El primer lugar libre esta en : [%d][indice]\n",primerIndice);

    }



    return 0;
}
