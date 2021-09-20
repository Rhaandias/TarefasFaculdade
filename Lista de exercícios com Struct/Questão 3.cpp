#include<stdio.h>
#include<windows.h>
#include<locale.h>main{setlocale(LC_ALL,"portuguese");}
#include<conio.h>
/*LISTA DE EXERCÍCIOS COM STRUCT  - Questão 3*/
#define TAM 50
#define TAMchar 50

struct Endereco{
	char rua[TAMchar];
	int numero;
	char complemento[TAMchar];
	char bairro[TAMchar];
	int CEP;
	char cidade[TAMchar];
	char estado[TAMchar];
	char pais[TAMchar];
};
struct Telefone{
	int DDD;
	int numero;
};
struct data{
	int dia;
	int mes;
	int ano;
};


struct cadastro{
	int codigo;
	char nome[TAMchar];
	char email[TAMchar];
	Endereco endereco;
	Telefone telefone;
	data dataAniversario;
	char obs[TAMchar]; 
};

main(){
	system ("chcp 1252 > nul");
	cadastro agenda[TAM];
	int cont,op=1, opcao=1, icadastro=0;
	
	
	
	
	while(opcao!=0){
		system("cls");
		printf("\n\nEscolha uma das opções de acordo com o código:\n");
		printf("\n1-Agendar cadastro");
		printf("\n2-Listar todos os cadastros");
		printf("\n0-Sair\n");
		scanf("%d",&opcao);
		fflush(stdin);
		
		switch(opcao)
		{
			case 1: 
				system("cls");
				printf("\n\n\t\tCADASTRAR\n");
					
				for(cont=icadastro;cont<TAM;cont++)
				{
					
					
					printf("\n\nNome: ");
					fgets(agenda[cont].nome, TAMchar, stdin);
					printf("E-mail: ");
					fgets(agenda[cont].email,TAMchar,stdin);
				
					printf("\nENDEREÇO\n");
					printf("País: ");
					fgets(agenda[cont].endereco.pais, TAMchar,stdin);
					printf("Estado: ");
					fgets(agenda[cont].endereco.estado, TAMchar,stdin);
					printf("Cidade: ");
					fgets(agenda[cont].endereco.cidade, TAMchar,stdin);
					printf("CEP: ");
					scanf("%d",&agenda[cont].endereco.CEP);
					fflush(stdin);
					printf("Bairro: ");
					fgets(agenda[cont].endereco.bairro, TAMchar,stdin);
					printf("Rua: ");
					fgets(agenda[cont].endereco.rua, TAMchar,stdin);
					printf("Número: ");
					scanf("%d",&agenda[cont].endereco.numero);
					fflush(stdin);
					printf("Complemento: ");
					fgets(agenda[cont].endereco.complemento, TAMchar,stdin);
					
					
					printf("\nTELEFONE ");
					printf("\nDDD: ");
					scanf("%d",&agenda[cont].telefone.DDD);
					fflush(stdin);
					printf("Número: ");
					scanf("%d",&agenda[cont].telefone.numero);
					fflush(stdin);
				
					printf("\nDATA DE ANIVERSÁRIO ");
					printf("\nDia: ");
					scanf("%d",&agenda[cont].dataAniversario.dia);
					fflush(stdin);
					printf("Mês: ");
					scanf("%d",&agenda[cont].dataAniversario.mes);
					fflush(stdin);
					printf("Ano: ");
					scanf("%d",&agenda[cont].dataAniversario.ano);
					fflush(stdin);
					
					printf("\nObservações: ");
					fgets(agenda[cont].obs,TAMchar,stdin);
					
					agenda[cont].codigo=cont;
					printf("\n\nCódigo: %d",agenda[cont].codigo);
					
					
					icadastro++;
					
					printf("\n\t\t#######-----------#######\n");
				
					if(cont!=TAM-1){
						printf("\nDigite 0 caso desejar voltar ao menu.\n");
						scanf("%d",&op);
						if(op==0){
							break;
						}
						printf("\n\t\t#######-----------#######\n");	
					}
					
				}
				if(cont==TAM)
				{
						printf("\n\nLIMITE DE CADASTROS ATINGIDO!!");
				}
				printf("\n\nPressione Enter para voltar ao menu.");	
				getch();
					
				
			break;
			
			case 2: //TODO:Listar todos os Cadastros; imprimir em tela todos os cadastros.
				system("cls");
				for(cont=0;cont<TAM;cont++){
					printf("\n\n\nCÓDIGO: %d", agenda[cont].codigo);
					printf("\nNome: %s", agenda[cont].nome);
					printf("E-mail: %s", agenda[cont].email);
					
					printf("\n\nENDEREÇO\n");
					printf("País: %s", agenda[cont].endereco.pais);
					printf("Estado: %s", agenda[cont].endereco.estado);					
					printf("Cidade: %s",agenda[cont].endereco.cidade);
					printf("CEP: %d",agenda[cont].endereco.CEP);					
					printf("\nBairro: %s",agenda[cont].endereco.bairro);					
					printf("Rua: %s",agenda[cont].endereco.rua);
					printf("Número: %d",agenda[cont].endereco.numero);
					printf("\nComplemento: %s",agenda[cont].endereco.complemento);
					
					printf("\nTELEFONE ");
					printf("\nDDD: %d",agenda[cont].telefone.DDD);
					printf("\nNúmero: %d",agenda[cont].telefone.numero);
					
					printf("\nDATA DE ANIVERSÁRIO: %d/%d/%d",agenda[cont].dataAniversario.dia
															,agenda[cont].dataAniversario.mes
															,agenda[cont].dataAniversario.ano);
					
					printf("\n\nObservações: %s",agenda[cont].obs);
					
				}
				printf("\n\nPressione Enter para voltar ao menu.");	
				getch();
			
			break;
			
			
			default:
				printf("\nOpção inválida!!");
				getch();
				
			break; 
					
		}
	}
	
	
	
	
}

