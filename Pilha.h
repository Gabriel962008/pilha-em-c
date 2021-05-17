#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
typedef struct Elemento{
	char item[50];
	//int  idade;
	struct Elemento *ant;
	struct Elemento *prox;
}Elemento;

typedef struct Pilha{
	Elemento *base,*topo;
	int quant;
}Pilha;

Pilha * novaPilha(){
	Pilha *nova = (Pilha *)malloc(sizeof(Pilha));
	nova->base = NULL;
	nova->topo = 0;
	nova->quant= 0;
	return nova;
}

void empilhar(Pilha *p,Elemento e){
	Elemento *novo = (Elemento *)malloc(sizeof(Elemento));
	*novo = e;
     
     if(p->quant == 0){
     	p->base = novo;
     	p->base->ant = NULL;
	 }
	 else{
	 	p->topo->prox = novo;
	 	novo->prox = NULL;
	 }
	 novo->ant = p->topo;
	 p->topo = novo;
	
	p->quant++;
}



void desempilha(Pilha *p,Elemento e){
	if(p->quant>0){
	Elemento *old;
	if(p->quant==1){
	  p->base=NULL;
	  p->topo=NULL;
	 }
	else{
	 old = p->topo;
	 p->topo = old->ant;
	 p->topo->prox=NULL;		
     }
	p->quant--;	
	}
}


void impressao(Pilha *p){
	Elemento *i;
	printf("\n          PILHA              \n");
	for(i=p->base;i!=NULL;i=i->prox){
		printf(" %s  \n",i->item);
	}
	printf("\n\n%d - itens",p->quant);
}
