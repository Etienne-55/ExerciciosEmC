/*1) Faca um programa que solicite 2 numeros e informe: a soma dos numeros, o produto do 
primeiro numero pelo quadrado do segundo, o quadrado do primeiro numero, a raiz quadrada 
da soma dos quadrados, o seno da diferenca do primeiro numero pelo segundo e O modulo 
do primeiro numero.*/

#include <stdio.h>
#include <math.h>

int main(){

int num1, num2, soma, produto, quadradoN1, raiz, SDQ, diferenca;
int modulo;
float seno;

printf("Informe dois valores:");
scanf("%d\n%d", &num1, &num2);

soma = num1 + num2;
//soma

produto = num1 * (num2 * num2);
//o produto do primeiro número pelo quadrado do segundo

quadradoN1 = num1 * num1;
//o quadrado do primeiro número

SDQ = (num1 * num1) + (num2 * num2);  
raiz = sqrt(SDQ);
//raiz quadrada da soma dos quadrados 

diferenca = num1 - num2;
seno = sin(diferenca);
//o seno da diferença do primeiro número pelo segundo

//modulo do priemiro numero
modulo = sqrt(pow(num1, 2));


printf("o valor da soma e: %d\n", soma);
printf("o valor do produto do primeiro pelo quadrado so segundo e: %d\n", produto);
printf("o quadrado do primeiro numero e: %d\n", quadradoN1);
printf("a raiz da soma dos quadrados e %d\n", raiz);
printf("o seno e %f\n", seno);
printf("Modulo do Primeiro: %d\n", modulo);
}