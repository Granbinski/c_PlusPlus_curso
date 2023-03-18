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

 //Lendo valor quebrado(float)
 float b = 5.5;
 printf("O valor de  b é %f\n", b);
 scanf("%f", &b);
 printf("O valor de  b é %f\n", b);

 //Lendo letras
 char letra = 'a';
 printf("O valor de  letra é %c\n", letra);
 fflush(stdin);
 scanf("%c", &letra);
 
}