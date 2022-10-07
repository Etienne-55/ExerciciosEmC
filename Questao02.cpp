/*2) Crie um programa que receba o valor da temperatura em Fahrenheit e imprime o 
correspondente em Celsius e em Kelvin:*/

#include <stdio.h>

int main(){
	
int tempF, tempC, tempK;

printf("Informe a temperatura em farenheight:");
scanf("%d", &tempF);

//calcular temp em grau celcius 
tempC = (tempF - 32) / 1.8;

//calcular temp em kelvin
tempK = (tempF + 459.67) * 5/9;

printf("A temperatura %d graus farenheight equivale a %d graus celcius e %d graus kelvin \n", tempF, tempC, tempK);

	return 0;
}