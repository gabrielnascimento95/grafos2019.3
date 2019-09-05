#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <Grafo.h>
#include <queue>
#include <stack>
#include <limits>
#include <vector>
#include <limits.h>
#include <bits/stdc++.h>
#include <algorithm>

Grafo::Grafo()
{
    ListaNos = NULL;
}

void Grafo::insereNo(int id){

    No* no = new No(id);
    no->setProx(this->ListaNos);
    this->ListaNos = no;
    this->setOrdem(getOrdem()+1);
}

void Grafo::insereAresta(int id_no, int idOrigem, int idDestino){
    No *origem, *destino;

    origem = this->buscaNoId(idOrigem);
    destino = this->buscaNoId(idDestino);

    Aresta *adj = origem->getAdj();

    Aresta *aresta = new Aresta(id_no);
    origem->setAdj(aresta);
    aresta->setNoAdj(destino);
    aresta->setNoOrigem(origem);

    aresta->setProx(adj);

    aresta->setproxAux(this->ListaArestas);
    this->ListaArestas = aresta;

}


No* Grafo::buscaNoId(int id)
{
    No* no = this->ListaNos;
    while(no!=NULL){
        if(no->getId()==id){
            return no;
        }
        no = no->getProx();
    }
    return NULL;
}

void Grafo::eh_orientado(int val){
    if(val == 0){
        this->ehOrientado = true;
    }else if (val == 1){
        this->ehOrientado = false;
    }else{
        exit(1);
    }
}

void Grafo::imprime(){
    No* no = this->ListaNos;
    while(no!=NULL){
        no->imprime();
        no = no->getProx();
    }
}

void Grafo::eh_ponderado_aresta(int val){
    if(val == 0){
        this->ehPonderadoAresta = true;
    }else if (val == 1){
        this->ehPonderadoAresta = false;
    }else{
        exit(2);
    }
}

void Grafo::eh_ponderado_no(int val){
    if(val == 0){
        this->ehPonderadoNo = true;
    }else if (val == 1){
        this->ehPonderadoNo = false;
    }else{
        exit(3);
    }
}

Grafo::~Grafo()
{
    //dtor
}
