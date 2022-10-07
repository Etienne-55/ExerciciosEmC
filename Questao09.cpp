/*9) Escreva um programa que leia 3 notas de um aluno e a media (ME) das notas dos 
exercicios realizados por ele. Calcular a media de aproveitamento, usando a formula: MA = 
(N1 + N2*2 + N3*3 + ME)/7. A partir da media, informar o conceito de acordo com a tabela:
(0,1)
maior ou igual a 9 A
maior ou igual a 7.5 e menor que 9 B
maior ou igual a 6 e menor que 7.5 C
maior ou igual a 4 e menor que 6 D
menor que 4 E*/

#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(0, "Portuguese");
	
float n1a1, n2a1, n3a1, n1a2, n2a2, n3a2, n1a3, n2a3, n3a3, m1, m2, m3, mm1, mm2, mm3;


printf("digite a primeira nota do aluno 1: \n");
scanf("%f", &n1a1);

printf("digite a segunda nota do aluno 1: \n");
scanf("%f", &n2a1);

printf("digite a terceira nota do aluno 1: \n");
scanf("%f", &n3a1);

m1=(n1a1+n2a1+n3a1)/3;
mm1=(n1a1 + n2a1*2 + n3a1*3 + m1)/7;

printf("a m?dia das provas do aluno 1 ? de: %.2f\n", m1);
printf("\n");

if (mm1>9 && mm1==9)
printf("Nota final: A\n");
else if (mm1>7.5 && mm1<9)
printf("Nota final: B\n");
else if (mm1>6 && mm1<7.5)
printf("Nota final: C\n");
else if (mm1>4 && mm1<6)
printf("Nota final: D\n");
else
printf("Nota final: E\n");

printf("\n");

printf("digite a primeira nota do aluno 2: \n");
scanf("%f", &n1a2);

printf("digite a segunda nota do aluno 2: \n");
scanf("%f", &n2a2);

printf("digite a terceira nota do aluno 2: \n");
scanf("%f", &n3a2);

m2=(n1a2+n2a2+n3a2)/3;
mm2=(n1a2 + n2a2*2 + n3a2*3 + m2)/7;

printf("a media das provas do aluno 2 e de: %.2f\n", m2);
printf("\n");

if (mm2>9 && mm2==9)
printf("Nota final: A\n");
else if (mm2>7.5 && mm2<9)
printf("Nota final: B\n");
else if (mm2>6 && mm2<7.5)
printf("Nota final: C\n");
else if (mm2>4 && mm2<6)
printf("Nota final: D\n");
else
printf("Nota final: E\n");

printf("\n");

printf("digite a primeira nota do aluno 3: \n");
scanf("%f", &n1a3);

printf("digite a segunda nota do aluno 3: \n");
scanf("%f", &n2a3);

printf("digite a terceira nota do aluno 3: \n");
scanf("%f", &n3a3);

m3=(n1a3+n2a3+n3a3)/3;
mm3=(n1a3 + n2a3*2 + n3a3*3 + m3)/7;

printf("a media das provas do aluno 3 e de:%.2f\n", m3);
printf("\n");

if (mm3>9 && mm3==9)
printf("Nota final: A\n");
else if (mm3>7.5 && mm3<9)
printf("Nota final: B\n");
else if (mm3>6 && mm3<7.5)
printf("Nota final: C\n");
else if (mm3>4 && mm3<6)
printf("Nota final: D\n");
else
printf("Nota final: E\n");

}