/*20) Crie um programa capaz de ler dois nomes de pessoas e imprimi-los em ordem alfabetica.*/

#include <stdio.h>
#include <string.h>
int main()
{
 
    char nome[10][8], tnome[10][8], temp[8];
    int i, j, n = 2;
 
    printf("Informe %d nomes: \n", n);
 
    for (i = 0; i < n; i++) 
{
    scanf("%s", nome[i]);
    strcpy(tnome[i], nome[i]);
}
 
    for (i = 0; i < n - 1 ; i++)
{
    for (j = i + 1; j < n; j++)
{
    if (strcmp(nome[i], nome[j]) > 0) 
{
    strcpy(temp, nome[i]);
    strcpy(nome[i], nome[j]);
    strcpy(nome[j], temp);
}
}
}
 
    for (i = 0; i < n; i++) 
{
    printf("%s\t\t%s\n", tnome[i], nome[i]);
}
}