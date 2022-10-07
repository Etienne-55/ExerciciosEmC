/*5) Escreva um programa que imprime a tabela ASCII (codigo decimal, codigo hexa, caractere) 
para os codigos de 0 a 127.*/

#include <stdio.h>
int main()
{
    char ch;
    printf("Escreva qualquer caractere: ");
    scanf("%c",&ch);
    printf("\nCaracter digitado: %c, Codigo ASCII: %d", ch, ch);
    return 0;
}