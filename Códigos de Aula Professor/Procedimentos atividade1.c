#include<stdio.h>
#include<windows.h>
#include<conio.h>




void somar(){
float a,b,somar;
system("cls");
printf("Digite os dois valores: ");
scanf("%f%f",&a,&b);
somar = a + b;
printf("\n\nA soma eh: %.1f", (somar) );
}



void subtrair(){
float a,b;
system("cls");
printf("Digite os dois valores: ");
scanf("%f%f",&a,&b);
printf("\n\nA subtracao eh: %.1f", (a-b) );
}



void multiplicar(){
float a,b;
system("cls");
printf("Digite os dois valores: ");
scanf("%f%f",&a,&b);
printf("\n\nA multipicacao eh: %.1f", (a*b) );
}



void dividir(){
float a,b;
system("cls");
printf("Digite os dois valores: ");
scanf("%f%f",&a,&b);
printf("\n\nA divisao eh: %.1f", (a/b) );
}





main(){
int op;
do{
system("cls");
printf("0 - sair \n");
printf("1 - somar \n");
printf("2 - subtrair \n");
printf("3 - multiplicar \n");
printf("4 - dividir \n");
scanf("%d", &op);
switch(op){
case 1:
somar();
break;
case 2:
subtrair();
break;
case 3:
multiplicar();
break;
case 4:
dividir();
break;
}
getch();
}while(op!=0);

}
