/*8) Faca o programa que apresenta a seguinte saida, perguntando ao usuario o numero 
maximo (no exemplo, 9). Este numero deve ser sempre impar.*/

#include<stdio.h>
#include<stdlib.h>

int main () {

    int n,i,j,b;

    printf("Digite o numero maximo do triangulo.\n");
    printf("\n");
    printf("Atencao, o numero deve ser impar.\n");
    scanf("%d", &n);
    printf("\n");

    if (n % 2 ==0)
       printf("Numero invalido.\n");

    else{

         b = (n - 1)/2;
         for( i=0; i<= b; i++){
              for (j=i+1; j<=n-i; j++){
                  printf(" %d",j);
              }
              printf("\n ");
         }                  
    }

system("pause");
} 