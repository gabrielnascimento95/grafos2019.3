#ifndef GRAFO_H
#define GRAFO_H
#include <No.h>
#include <Aresta.h>
#include <stack>
#include <vector>

class Grafo
{
    public:
        Grafo();
        No* buscaNoId(int id);
        void insereNo(int id);
        void insereAresta(int id, int IdOrigem, int IdDestino);
        void setOrdem(int novaOrdem){ordem = novaOrdem;};
        int getOrdem(){return ordem;};
        void eh_orientado(int val);
        void eh_ponderado_aresta(int val);
        void eh_ponderado_no(int val);
        void imprime();
        bool getOrientacao(){return ehOrientado;};
        bool getPonderadoAresta(){return ehPonderadoAresta;};
        bool getPonderadoNo(){return ehPonderadoNo;};
        No* getListaNos(){return ListaNos;}
        Aresta* getListaArestas(){return ListaArestas;}
        virtual ~Grafo();

    protected:

    private:
        int ordem;
        int grau;
        bool direcaoNos;
        bool arestasPonderadas;
        bool ehOrientado;
        bool ehPonderadoAresta;
        bool ehPonderadoNo;
        No* ListaNos;
        Aresta* ListaArestas;
};

#endif // GRAFO_H
