#include<stdio.h>
#include<windows.h>
#include<locale.h>main{setlocale(LC_ALL,"portuguese");}
/*LISTA DE EXERC�CIOS COM STRUCT - exerc.1*/

#define num 5

struct livro{
	char titulo[50];
	int anoedicao, npaginas;
	float preco;	 
};

main (){
	system ("chcp 1252 > nul");
	int cont, soma=0, qtdlivros=0;
	float media;
	livro book[num];
	
	for(cont=0;cont<num;cont++){
		printf("\n\nT�tulo do livro %d: ", cont+1);
		fgets(book[cont].titulo,50,stdin);
		printf("\nAno de edi��o: ");
		scanf("%d", &book[cont].anoedicao);
		fflush(stdin);
		printf("\nN�mero de p�ginas: ");
		scanf("%d",&book[cont].npaginas);
		fflush(stdin);
		printf("\nPre�o: ");
		scanf("%f",&book[cont].preco);
		fflush(stdin);
		printf("\n\t\t########\n\n");			
	}
	
	for(cont=0;cont<num;cont++){
		soma+=book[cont].npaginas;
		qtdlivros++;
	}
	media=soma/qtdlivros;
	
	printf("\n\nM�dia de n�mero de p�gina: %.2f", media);
		
	
	
	
}
