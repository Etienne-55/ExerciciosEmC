/*21) Escreva um programa que leia doze numeros do tipo inteiro ao usuario. Separe esses 
numeros em pares e impares e os armazenem em dois outros vetores separando pares e 
impares, exibindo os resultados na tela.*/


#include <stdio.h>

int main()
 {
    int arr1[10], arr2[10], arr3[10];
    int i,j=0,k=0,n;

       printf("Informe quantos numeros voce quer inlcuir :");
       scanf("%d",&n);
   
       printf("informe %d valores :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("numero - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

    for(i=0;i<n;i++)
    {
	if (arr1[i]%2 == 0)
	{
	   arr2[j] = arr1[i];
	   j++;
	}
	else
	{
	   arr3[k] = arr1[i];
	   k++;
	}
    }

    printf("\nOs numeros pares sao : \n");
    for(i=0;i<j;i++)
    {
	printf("%d ",arr2[i]);
    }

    printf("\nOs numeros impares sao :\n");
    for(i=0;i<k;i++)
    {
	printf("%d ", arr3[i]);
    }
    printf("\n\n");	
 }