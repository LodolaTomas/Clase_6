#include "funciones.h"


void cargarArrayHardcode(int Sillas[],int Edades[],int Cantidad)
{
    int auxA[]= {91,19,81,91,98};
    int auxB[]= {55,11,33,22,44};

    int i;
    for(i=0; i<Cantidad; i++)
    {
        Sillas[i]=auxA[i];
        Edades[i]=auxB[i];
    }

}
void mostarDatos(int Sillas[],int Edades[],int Cantidad)
{
    int i;
    for(i=0; i<Cantidad; i++)
    {

        printf("Legajo[%d]= Silla %d, Edad %d\n",i,Sillas[i],Edades[i]);

    }

}

void mostarUno(int Sillas[],int Edades[],int indice)
{

    printf("Legajo[%d]= Silla %d, Edad %d\n",indice,Sillas[indice],Edades[indice]);

}
int Calcular_maximaEdad(int Sillas[],int Edades[],int Cantidad)
{
    int i;
    int flag=0;
    int maxima_edad;
    int maxima;
    for(i=0; i<Cantidad; i++)
    {

        if(flag==0 || maxima_edad<Edades[i])
        {
            maxima_edad=Edades[i];
            maxima=i;
            flag=1;
        }
    }

    return maxima;

}

void mostrar_maximaEdad(int Sillas[],int Edades[],int Cantidad)
{
    int max=Calcular_maximaEdad(Sillas,Edades,Cantidad);
    int i;

    for(i=0; i<Cantidad; i++)
    {

        if(Edades[i]==max)
        {
            printf("MAXIMA = Legajo[%d]= Silla %d, Edad %d\n",i,Sillas[i],Edades[i]);
        }
    }




}
void Calcular_minimaEdad(int Sillas[],int Edades[],int Cantidad)
{
    int i;
    int flag=0;
    int minima_edad;
    int minima;
    for(i=0; i<Cantidad; i++)
    {

        if(flag==0 || minima_edad>Edades[i])
        {
            minima_edad=Edades[i];
            minima=i;
            flag=1;
        }


    }

    printf("Edad minima= legajo[%d],Silla[%d],Edad[%d]\n",minima,Sillas[minima],Edades[minima]);




}
