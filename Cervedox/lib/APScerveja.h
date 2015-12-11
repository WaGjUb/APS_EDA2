#ifndef __APS__
#define __APS__


#include <stdio.h>
#define M 5 //ordem do indice
#define C 6 //numero de bytes da chave +1 para ser string 

typedef enum Boolean {false = 0, true = 1} bool;

typedef struct cadastro //arquivo que será lido/gravado
{	
	char nome[30];
	char fabricante[30];
	char pais[25];
	char estilo[25];
	char teor[4];
	char nota;
	char chave[C];
} Cadastro;

typedef struct dadoincide
{
	char ID[C];
	int RRN;
} DadoIndice;

typedef struct indice //arvoreB
{
	int qtdchaves;
	DadoIndice Chave[M-1];
	struct indice* filhos[M];
	bool folha;
} Indice;

int ElementosPagina(FILE* pfile, int rrn);
 int Buscar(FILE* pfile, char ID[C], int rrn);


#endif
