#include "Aresta.h"

Aresta::Aresta()
{
     this->id = id;
     this->prox = NULL;
}

void Aresta::imprime()
{
    cout << " --|" << this->id << "|-->" << this->noAdj->getId() << " ";
}

Aresta::~Aresta()
{
    //dtor
}
