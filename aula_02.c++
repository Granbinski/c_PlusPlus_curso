#include <stdio.h>
#include <locale.h>

void main(){
 //Permite usar acentos
 setlocale(LC_ALL,"Portuguese");

 //Imprime Ola
 printf("Ola Mundo\n");

 //Lendo valor inteiro
 int a = 50;
 printf("O valor de  a é %d\n", a);
 scanf("%d", &a);
 printf("O valor de  a é %d\n", a);
 
}