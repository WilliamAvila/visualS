#include "Nodo.h"
#include "Lista.h"


Nodo::Nodo()
{

   this->carta =  new Card();
   this->siguiente=NULL;
    //ctor
}

Nodo::~Nodo()
{
    //dtor
}
