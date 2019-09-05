#ifndef NO_H
#define NO_H


class No
{
    public:
        No(int id);
        int getId(){return id;}
        void setId(int novoId){id = novoId;}
        int getIdComp(){return idComp;}
        void setIdComp(int novoId){idComp = novoId;}
        int getPeso(){return peso;}
        void setPeso(float novoPeso){peso = novoPeso;}
        int getGrau(){return grau;}
        void setGrau(int novoGrau){grau = novoGrau;}
        int getGrauEntrada(){return grauEntrada;}
        void setGrauEntrada(int novoGrauEntrada){grauEntrada = novoGrauEntrada;}
        int getGrauSaida(){return grauSaida;}
        void setGrauSaida(int novoGrauSaida){grauSaida = novoGrauSaida;}
        void setProx(No* proxi){prox= proxi;}
        No* getProx(){return prox;}
        void setAdj(Aresta* aresta){adj=aresta;}
        Aresta* getAdj(){return adj;}
        void imprime();
        virtual ~No();

    protected:

    private:
        int id;
        int idComp;
        float peso;
        Aresta* adj;
        No* prox;
        int grau;
        int grauEntrada;
        int grauSaida;
};

#endif // NO_H
