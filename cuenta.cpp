#include "cuenta.h"
#include<iostream>
cuenta::cuenta()
{

}

cuenta::cuenta(string t, double m):
    titular(t), monto(m)
{

}

void cuenta::ingreso(double cantidad)
{
    if(cantidad < 0){
        return;
    }
    monto += cantidad;
}

void cuenta::retiro(double cantidad)
{
    if(cantidad > monto){
        return;
    }
    monto -= cantidad;
}

void cuenta::balance()
{
    cout<<"Nombre del titular: "<<titular<<" Cantidad: "<<monto;

}


