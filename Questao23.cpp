/*23) Escreva um programa que solicite seis numeros do tipo inteiro ao usuario e os armazene 
em um vetor, depois o programa devera apresentar na tela os numeros na ordem inversa do 
qual foram digitados.*/

#include <stdio.h>
 
int main(){
  int n = 6,i;
  int num[50];
 
 
  printf("Informe %d valores: ",n);
  for(i = 0; i < n; i++){
    scanf("%d", &num[i]);
  }
  printf("Ordem inversa: ");
  for(i = n-1; i >= 0; i--){
    printf("%d ",num[i]);
  }
  printf("\n");
  return 0;
}
