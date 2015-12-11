#include "../lib/APScerveja.h"
/*
void MenuInsercao()
{
	char chave[C];
	printf("Chave da cerveja: ")
	scanf("%s", chave);
	Inserir()
}

void menu()
{
	int opcao = 0;
	do{
		printf("Selecione uma opção: \n"
			"1 - Inserção de cerveja\n"
			"2 - Busca de cerveja\n"
			"3 - Finalizar a execução\n");
		scanf("%d", opcao);

return(opcao);
}
*/
int main()
{
/*	int opcao;
	

	do {
	opcao = menu();
		switch (opcao)
		{
			case 1: 
				MenuInsercao();
				break;
			case 2:
				MenuBusca();
				break;
			default:
				printf("Opção digitada inválida!\n");
				break;
		}
	}
	while (opcao != 3);
*/

FILE* fp;
fp = fopen("./files/ind.idx", "r+");
	char ID[C] = "AB15";
	printf("Quantidade de chaves %d\n", ElementosPagina(fp, 0));
	if (Buscar(fp, ID, 0) != -1)
	{
		printf("Está no arquivo");
	}
	else
	{
		printf("Não está no arquivo");
	}

fclose(fp);
	return(0);
}
