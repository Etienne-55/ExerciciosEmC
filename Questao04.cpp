/*4) Faca um programa que le dois valores e imprime: 
a) se o primeiro valor for menor que o segundo, a lista de valores do primeiro ate o segundo;
b) se o primeiro valor for menor que o segundo a lista de valores do segundo ate o primeiro 
em ordem decrescente;
c) se ambos forem iguais a mensagem "valores iguais".*/


#include <stdio.h>

int main() {
int valor1, valor2, i, passo;

printf("Por favor informe o primeiro valor ");
scanf("%d",&valor1);
printf("Por favor informe o segundo valor");
scanf("%d",&valor2);
if (valor1 == valor2){
   printf("valores iguais\n");
}else {
  if (valor1 < valor2) {
    printf("O primeiro valor e menor que o segundo \n");
    for(i=valor1;i<=valor2;i++){
      printf("%d \n",i);
    };
    
  } else {
    printf("O segundo valor e menor que o primeiro\n");
    for(i=valor1;i>=valor2;i--){
      printf("%d \n",i);
    };
  };
};
}