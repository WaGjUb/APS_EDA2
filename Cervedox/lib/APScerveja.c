#include "APScerveja.h"
#include <stdlib.h>
#include <string.h>


int ElementosPagina(FILE* pfile, int rrn)
{
	int i = 0;
	char c;

	fseek(pfile, rrn, SEEK_SET);
	while ((c = getc(pfile)) != '#')
	{
		if (c == '@')
			i++;
	}
	return(i);
}


//MAS QUE ORGULHO DESTA FUNÇÃO HEUHEUHEUHEUE =D
int Buscar(FILE* pfile, char ID[C], int rrn) //esse rrn é para sabermos em qual pagina o ponteiro está
{
	int RRNfilho, RRNdado, comparacao, i;
	int valido = -1;
	char IDarvore[C];




	fseek(pfile, rrn, SEEK_SET); //TODO maybe

	if (rrn == -1)
	{
		return -1; //TODO maybe
	}
	int elementos = ElementosPagina(pfile, rrn);
	fseek(pfile, rrn, SEEK_SET); 
	for (i=0; i<elementos; i++) //M-1 pois esta é a quantidade de chaves contidas em cada pagina, ou seja percorre a pagina toda
	{
		fscanf(pfile, "%d<", &RRNfilho); //RRNdado não é usado, apenas para tokenizar corretamente
		fgets(IDarvore, C-1, pfile);
		IDarvore[C] = '\0';		
		setbuf(stdin,NULL);
		fscanf(pfile, ",%d>@", &RRNdado);
		//printf("%s, %s\n", ID, IDarvore);
		comparacao = strcmp(ID, IDarvore);


		if (comparacao == 0) //condicao de parada
		{
			return rrn;
		}

		if (comparacao < 0)
		{
			valido = Buscar(pfile, ID, RRNfilho);
			break;
		}


	}

	if (comparacao > 0)
	{
		fscanf(pfile, "%d#",& RRNfilho);
		valido = Buscar(pfile, ID, RRNfilho);
	}

	return valido;
}



/*
   DadoIndice Remover(Indice* raiz, char ID[C])
   {
   int pos = Buscar(raiz, ID, 0);

   if (pos == -1)
   {
   return NULL; //TODO MSG DE ERRO
   }

   }
   */

bool InserirNova(FILE * pfile, DadoIndice dado)
{
	//verifica se a chave ja existe
	if (Buscar(pfile, dado.ID, 0) != -1)
	{
		return false;
	}
	 

		

}
