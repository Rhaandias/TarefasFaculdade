#include<stdio.h>
#include<windows.h>
#include<locale.h>main{setlocale(LC_ALL,"portuguese");}

/*LISTA DE EXERCÍCIOS COM STRUCT  exerc.2*/
#define nalunos 5

struct programacao_de_computadores{
	int matricula;
	char nome[50];
	float nota1, nota2;
};

main(){
	system ("chcp 1252 > nul");
	
	programacao_de_computadores alunos[nalunos];
	int cont, imenormedia, imaiormedia, imaiornota;
	float maior_nota1, media, maior_media, menor_media;
	
	for(cont=0;cont<nalunos;cont++){
		printf("\n\n%dº ALUNO\n",cont+1);
		printf("Matrícula do aluno: ");
		scanf("%d",&alunos[cont].matricula);
		fflush(stdin);
		printf("Nome: ");
		fgets(alunos[cont].nome, 50,stdin);
		printf("Nota da 1ª Prova: ");
		scanf("%f",&alunos[cont].nota1);
		fflush(stdin);
		printf("Nota da 2ª Prova: ");
		scanf("%f",&alunos[cont].nota2);
		fflush(stdin);
		system("cls");	
	}
	for(cont=0;cont<nalunos;cont++){
		
		media=(alunos[cont].nota1+alunos[cont].nota2)/2;
		
		if(cont==0){
			maior_nota1=alunos[cont].nota1;
			maior_media=media;
			menor_media=media;
			imenormedia=cont;
			imaiormedia=cont;
			imaiornota=cont;
			
		}else if(maior_nota1<alunos[cont].nota1){
			maior_nota1=alunos[cont].nota1;
			imaiornota=cont;
		}
		
		if(maior_media<media){
			maior_media=media;
			imaiormedia=cont;
		}
		if(menor_media>media){
			menor_media=media;
			imenormedia=cont;
		}
	}
	
	printf("\n\nAluno com maior nota da primeira prova: %s", alunos[imaiornota].nome);
	printf("Aluno com maior media geral: %s", alunos[imaiormedia].nome);
	printf("Aluno com menor media geral: %s\n\n", alunos[imenormedia].nome);
	
	media=0;
	for(cont=0;cont<nalunos;cont++){
		printf("\n\nAluno: %s", alunos[cont].nome);
		media=(alunos[cont].nota1+alunos[cont].nota2)/2;
		
		if(media>6){
			printf("APROVADO");	
		}else {
			printf("REPROVADO");
		}
	}
}
