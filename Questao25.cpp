/*25) Faca um programa que le um conjunto de 10 valores inteiros e verifica se algum dos 
valores e igual a media dos mesmos.*/ 

#include <stdio.h>
int main()
{
	
	
int v1, v2, v3, v4, v5, v6, v7, v8, v9, v10, mg;

printf("digite um valor inteiro: ");
scanf("%d", &v1);

printf("digite outro valor inteiro: ");
scanf("%d", &v2);

printf("digite outro valor inteiro: ");
scanf("%d", &v3);

printf("digite outro valor inteiro: ");
scanf("%d", &v4);

printf("digite outro valor inteiro: ");
scanf("%d", &v5);

printf("digite outro valor inteiro: ");
scanf("%d", &v6);

printf("digite outro valor inteiro: ");
scanf("%d", &v7);

printf("digite outro valor inteiro: ");
scanf("%d", &v8);

printf("digite outro valor inteiro: ");
scanf("%d", &v9);

printf("digite o ultimo valor inteiro: ");
scanf("%d", &v10);


mg=(v1+v2+v3+v4+v5+v6+v7+v8+v9+v10)/10;


if (v1==mg)
printf("\nO valor 1 e igual a media de todos os valores!");
else if (v2==mg)
printf("\nO valor 2 e igual a media de todos os valores!");
else if (v3==mg)
printf("\nO valor 3 e igual a media de todos os valores!");
else if (v4==mg)
printf("\nO valor 4 e igual a media de todos os valores!");
else if (v5==mg)
printf("\nO valor 5 e igual a media de todos os valores!");
else if (v6==mg)
printf("\nO valor 6 e igual a media de todos os valores!");
else if (v7==mg)
printf("\nO valor 7 e igual a media de todos os valores!");
else if (v8==mg)
printf("\nO valor 8 e igual a media de todos os valores!");
else if (v9==mg)
printf("\nO valor 9 e igual a media de todos os valores!");
else if (v10==mg)
printf("\nO valor 10 e igual a media de todos os valores!");
else 
printf("\nNenhum valor e igual a media dos valores digitados!");
}