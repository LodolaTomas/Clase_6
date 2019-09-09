#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

void inicializarArray(int arraySillas[],int cantidad,int valorInicial)
{
    int i;

    for(i=0; i<cantidad; i++)
    {
        arraySillas[i]=valorInicial;
    }



}
void cargarArrayHardcode(int arraySillas[],int cantidad)
{
    int i;
    int x[]= {55,11,22,33,44};
    for(i=0; i<cantidad; i++)
    {
        arraySillas[i]=x[i];
    }

}
void mostrarArray(int arraySillas[],int cantiadad)
{
    int i;

    for(i=0; i<cantiadad; i++)
    {

        printf("Silla[%d]=%d\n",i,arraySillas[i]);

    }


}
int dameElMaximo(int arraySillas[],int Cantidad)
{
    int i;
    int maximo;
    int flag=0;

    for(i=0; i<Cantidad; i++)
    {

        if(flag==0 || maximo<arraySillas[i])
        {
            maximo=arraySillas[i];
            flag=1;
        }

    }

    return maximo;
}
int dameElMinimo(int arraySillas[],int Cantidad)
{

    int i;
    int minimo;
    int flag=0;

    for(i=0; i<Cantidad; i++)
    {

        if(flag==0 || minimo>arraySillas[i])
        {
            minimo=arraySillas[i];
            flag=1;
        }

    }

    return minimo;

}


int estaLibre(int arraySillas[],int Cantidad,int laSilla,int valorInicial)
{
    int retorno=-1;



    if(arraySillas[laSilla]==valorInicial)
    {

        retorno=1;

    }

    return retorno;
}

int ocuparSilla(int arraySilla[],int cantidad, int laSilla,int legajo)
{
    int retorno=-1;
    int estaLibreLaSilla;

    if(laSilla<cantidad)
    {
        estaLibreLaSilla=estaLibre(arraySilla,cantidad,laSilla,-1);

        if( estaLibreLaSilla==1)
        {

            arraySilla[laSilla]=legajo;
            retorno=1;
        }

    }

    return retorno;

}
