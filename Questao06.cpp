/*6) Faca um programa que le o preco de um produto e inflaciona esse preco em 10% se ele 
for menor que 100 e em 20% se ele for maior ou igual a 100. OBS: nao use o comando "if" 
ou o operador de condicao "?".*/

#include <stdio.h>

int main(){
    
float valor, inf; 

    printf("Informe o valor do produfo: ");
    scanf("%f", &valor);

while(valor < 100){
        inf = valor + (valor * 0.10);
        printf("O novo valor e: %.2f", inf);
    break;
}

while(valor >= 100){
        inf = valor + (valor * 0.20);
        printf("O novo valor e: %.2f", inf);
    break;
} 
return 0;
}