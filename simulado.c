#include <stdio.h>
#include <stdlib.h>

	typedef struct lista{
		
		int num;
		
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

int treeIsEmpty(Tree* t)
{
  return t == NULL;
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
	
	prinft("------------------------------------")
	prinft("1 - Cadastrar")
	prinft("2 - Gerar Classificação")
	prinft("2 - Exibir Candidatos Classificados")
	prinft("3 - Consultar Candidato Classificado")
	prinft("------------------------------------")
		
	switch (menu){
		
		case menu 1:	//CADASTRAR 
			
			printf("digite a matricula:")
			scanf("%d")
			
			for(int i = 0 ; i < Lista.length ; i++){
				matricula->Lista;
				Lista->proximo;
			
		}	
    }
						
			break;
			
		case menu 2:	//GERA CLASSIFICAÇÃO
			
			break;
			
		case menu 3:		//EXIBIR CANDIDATOS CLASSIFICADOS
		
			break;
			
		case menu 4:	 	//CONSULTAR CANDIDATO CLASSIFICADO
		
			break;
			
	}
	
inserir_lista();	
		
InserirDados(10);
InserirDados(7);
InserirDados(9);
InserirDados(5);
	
verifica_nota();

	return 0;
}
