BIBNAME = "./lib/APScerveja"
MAINAME = "./src/main"
BIBOUTPUT = "APS"
MAINOUTPUT = "CervejaAPS"

all: bib
	@printf "Compilando o $(MAINAME)... \n"
	@gcc -g $(MAINAME).c $(BIBOUTPUT).o -o $(MAINOUTPUT).o -lm -Wall -Wextra
	@if [ -f ./a.out ]; then echo "Código compilado com sucesso!"; else echo "Erro ao compilar o código"; exit 2; fi
	@printf "removendo arquivos temporarios... "
	@rm $(BIBOUTPUT).o
	@if [ -f $(BIBOUTPUT).o ]; then printf "\nErro ao remover arquivos temporários\n"; exit 3; else printf "OK\n"; fi

bib:
	@printf "Verificando bibliotecas... \n"
	@if [ -f ./$(BIBNAME).c ] && [ -f ./$(BIBNAME).h ];	then echo "$(BIBNAME)... OK"; else echo "A biblioteca $(BIBNAME) não está na pasta"; exit 1; fi 
	@printf "Compilando bibliotecas..."
	@gcc -c -g $(BIBNAME).c -o $(BIBOUTPUT).o -lm -Wall -Wextra
	@if [ -f $(BIBOUTPUT).o ]; then printf "OK\nBiblioteca compilada com sucesso!\n"; else printf "\nErro ao compilar a biblioteca :(\n"; exit 2; fi
