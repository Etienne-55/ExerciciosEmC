/*10) Faca um programa que receba um numero inteiro e que verifique se esse numero e par 
ou impar. O programa deve informar se o numero e par, caso afirmativo informar tambem se 
e ou nao maior que 15 ou se o numero e impar, caso afirmativo informar se e ou nao menor 
que 50.*/

#include <stdio.h>
int main()
{
int n;

printf("digite um numero qualquer: ");
scanf("%d", &n);

if (n%2==0 && n>15)
printf("numero par e maior que 15");
else if (n%2==0 && n<15)
printf("numero par e menor que 15");
else if (n%2!=0 && n>50)
printf("numero impar e maior que 50");
else if (n%2!=0 && n<50)
printf("numero impar e menor que 50");
else
printf("invalido");

}