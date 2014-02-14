#include "Lista.h"
#include "Nodo.h"


Lista::Lista()
{
  this->cont=0;
  inicio=NULL;  //ctor
}

bool Lista::insertar(int pos, Nodo *nodo)
{
    if(pos<0  || pos>cont )
        return false;

    if(pos==0)
    {
       Nodo *tem=inicio;
       nodo->siguiente=tem;
       inicio=nodo;
    }
    else
    {
       int i=0;
        Nodo *tem=inicio;
        while(i!=pos-1){
            tem=tem->siguiente;
            i++;
        }
        nodo->siguiente=tem->siguiente;
        tem->siguiente=nodo;
    }
    cont++;
    return true;
}

Nodo *Lista::ini()
{
    return inicio;
}

Nodo *Lista::fin()
{
    return recuperar(cont-1);
}

Nodo *Lista::siguiente(int pos)
{
    if(pos>=cont-1 || pos<0)
      return NULL;

    return recuperar(pos)->siguiente;
}

Nodo *Lista::recuperar(int pos)
{
    if(pos>=cont || pos<0)
        return NULL;

    Nodo *tem=inicio;

    for(int i=0;i<pos;i++){
       tem=tem->siguiente;
    }
    return tem;
}

bool Lista::eliminar(int pos)
{
    if(pos<0 || pos>=cont)
        return false;
    if(pos==0)
    {
        Nodo *temp=inicio;
        inicio=temp->siguiente;
    }
    else
    {
        Nodo *temp=recuperar(pos);
        if(temp!=NULL)
        {
           Nodo *temp2=recuperar(pos-1);
           temp2->siguiente=temp->siguiente;
        }
    }
    cont--;
    return true;
}

bool Lista::mover(int from, int to)
{
    Nodo *temp=recuperar(from);

    if(temp!=NULL)
    {
        if(eliminar(from))
          if(insertar(to,temp))
             return true;
    }

    return false;
}

void Lista::imprimir()
{

}


Lista::~Lista()
{
    //dtor
}
