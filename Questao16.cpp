/*16) Dados um numero natural n, exiba seu fatorial n!.*/

#include<stdio.h>

int fat, n;

int main()
{
    printf("Informe o valor para saber seu fatorial :");
    scanf("%d", &n) ;

    for(fat = 1; n > 1; n = n - 1)
{
    fat = fat * n;
}

  printf("\n%d", fat);
  return 0;
}