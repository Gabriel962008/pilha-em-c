#include<string.h>
#include"Pilha.h"

int main(){
	Pilha *pilha = novaPilha();
	Elemento e;
	
		strcpy(e.item, "G");
		empilhar(pilha,e);
		
		strcpy(e.item,"H");
		empilhar(pilha,e);
		
		strcpy(e.item,"I");
		empilhar(pilha,e);
		
	    impressao(pilha);
		desempilha(pilha,e);
		printf("\n");
		
		impressao(pilha);
		desempilha(pilha,e);
		printf("\n");
		
		impressao(pilha);
	
getch();
}
