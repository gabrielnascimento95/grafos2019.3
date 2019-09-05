#include "No.h"

No::No(int id)
{
    this->id = id;
    this->prox = NULL;
    this->adj = NULL;
}

void No::imprime()
{
    cout << this->id;
    Aresta* aresta = this->adj;
    while(aresta!=NULL)
    {
        aresta->imprime();
        aresta = aresta->getProx();
    }
    cout << endl;
}


No::~No()
{
    //dtor
}
