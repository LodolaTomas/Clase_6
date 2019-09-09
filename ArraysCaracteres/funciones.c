#include "funciones.h"


void cargarArrayHardcode(int arraySillas[],int cantidad)
{

    arraySillas[cantidad]={55,11,22,33,44};

}
int dameElMaximo(int arraysSillas[],int Cantidad)
{
    int i;
    int maximo;
    int flag=0;

     for(i=0;i<Cantidad;i++)
     {

     if(flag==0 || maximo<arraysSillas[i])
     {
        maximo=arraysSillas[i];
        flag=1;
     }

     }

    return maximo;
}
int dameElMinimo(int arraysSillas[],int Cantidad)
{

    int i;
    int minimo;
    int flag=0;

     for(i=0;i<Cantidad;i++)
     {

     if(flag==0 || minimo>arraysSillas[i])
     {
        minimo=arraysSillas[i];
        flag=1;
     }

     }

    return minimo;

}
