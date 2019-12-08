#include <stdio.h>
#include <stdlib.h>

	typedef struct lista{
		int matricula;
		float notafinal;
		
		struct lista* proximo;
} Lista;

	typedef struct tree{
		
  	int num;
  	struct tree* direita;
  	struct tree* esquerda;
  	
} Tree;

Lista* createLista(){
	return NULL;
}

Tree* createTree(){
	return NULL;
}

void InserirDados(Tree** t, int num)
{
  if(*t == NULL)
  {
    *t = (Tree*)malloc(sizeof(Tree)); 
    (*t)->esquerda = NULL; 
    (*t)->direita = NULL; 
    (*t)->num = num; 
  } else {
    if(num < (*t)->num) 
    {
      
      InserirDados(&(*t)->esquerda, num);
    }
    if(num > (*t)->num) 
    {
      
      InserirDados(&(*t)->direita, num);
    }
  }
}

void Listar(Tree* t)
{
  
  printf("<"); 
  if(!treeIsEmpty(t)) 
  {
    
    printf("%d ", t->num); 
    Listar(t->esquerda); 
    Listar(t->direita); 
  }
  printf(">"); 
}

int main(int argc, char *argv[]) {
	

	return 0;
}
