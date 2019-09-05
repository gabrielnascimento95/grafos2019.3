#include <iostream>
#include <Grafo.h>
#include <No.h>
#include <Aresta.h>
#include <sstream>
#include <fstream>
#include <iostream>
#include <stdlib.h>
#include <cstdio>

using namespace std;

void cabecalhoTrabalho()
{

    cout << "#-----------------------------------------------------------------------------#"<< endl;
    cout << "-----------------  Trabalho de Grafos 2019-2  - Grupo 09 ---------------------" << endl;
    cout << "-----------------           Equipe                       ---------------------" << endl;
    cout << "-----------------   Gabriel Nascimento  201376133        ---------------------" << endl;
    cout << "-----------------   Gabriele Rufino                      ---------------------" << endl;
    cout << "-----------------   Joao Paulo                           ---------------------" << endl;
    cout << "-----------------   Samira                               ---------------------" << endl;
    cout << "-----------------   Pedro                                ---------------------" << endl;
    cout << "-----------------     Professor: Stenio Sa               ---------------------" << endl;
    cout << "#----------------------------------------------------------------------------#" << endl;
    cout << endl;

}

void lerArquivoEntrada(char arquivo[80], Grafo* grafo){
    int tam;
    FILE* file;
    file = fopen(arquivo, "r");

    if (file == NULL){
        cout << " Erro. Leitura inválida" << endl;
        exit(0);
    }

    if(!feof(file)){
        fscanf(file,"%d \n \n", &tam);
        cout << "Ordem do grafo: " << tam << endl;
    }else{
        exit(0);
    }

    while(!feof(file)){
        int v1, v2, line = 1;
        int peso;
        fscanf(file, "%d %d %d\n", &v1, &v2, &peso);
            if(!grafo->buscaNoId(v1))
                grafo->insereNo(v1);
            if(!grafo->buscaNoId(v2))
                grafo->insereNo(v2);
            if(grafo->getOrientacao() == false){
                grafo->insereAresta(peso, v1, v2);
                grafo->insereAresta(peso, v2, v1);
            }else{
                grafo->insereAresta(peso, v1, v2);
            }
    }
}

/*
Ordem dos parâmetros de inicialização
    1- Arquivo de entrada
    2- Arquivo de saida
    3- Flag de grafo orientado (0 p/ orientado e 1 p/ não orientado)
    4- Flag para grafo ponderado nas arestas (0 p/ ponderado e 1 p/ não ponderado)
    5- Flag para grafo ponderado nos nos     (0 p/ ponderado e 1 p/ não ponderado)
*/

int main(int argc, char * argv[])
{
    cabecalhoTrabalho();

    cout << "Arquivo de entrada:v" << argv[1] << endl;
    cout << "Arquivo de saida: " << argv[2] << endl;
    cout << endl;

    int grafOrientado = atoi (argv[3]);
    int grafPonderadoAresta = atoi (argv[4]);
    int grafPonderadoNo = atoi (argv[5]);

    Grafo* grafo = new Grafo();
    grafo->eh_orientado(grafOrientado);
    grafo->eh_ponderado_aresta(grafPonderadoAresta);
    grafo->eh_ponderado_no(grafPonderadoNo);

    lerArquivoEntrada(argv[1], grafo);
    grafo->imprime();

    return 0;
}
