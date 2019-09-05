#ifndef ARESTA_H
#define ARESTA_H
#include "No.h"


class Aresta
{
    public:
        Aresta();
        int getId(){return id;}
        float getPeso(){return peso;};
        void setPeso(float novoPeso){peso = novoPeso;};
        Aresta* getProx(){return prox;};
        void setProx(Aresta* novoProx){prox = novoProx;};
        Aresta* getproxAux(){return proxAux;}
        void setproxAux(Aresta* novoProx){proxAux = novoProx;}
        void setNoAdj(No* no){noAdj = no;}
        No* getNoAdj(){return noAdj;}
        void setNoOrigem(No* no){noOrigem = no;}
        No* getNoOrigem(){return noOrigem;}
        void imprime();
        virtual ~Aresta();

    protected:

    private:
        No* noAdj;
        No* noOrigem;
        int id;
        float peso;
        Aresta *prox;
        Aresta *proxAux;
};

#endif // ARESTA_H
