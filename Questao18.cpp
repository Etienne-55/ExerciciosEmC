#include <locale.h>
int main()
{	
float m1, m2, m3, m4, m5, m6, m7, m8, m9, m10, st, mg, mmm, mm;

printf("digite a media do aluno 1: ");
scanf("%f", &m1);

printf("digite a media do aluno 2: ");
scanf("%f", &m2);

printf("digite a media do aluno 3: ");
scanf("%f", &m3);

printf("digite a media do aluno 4: ");
scanf("%f", &m4);

printf("digite a media do aluno 5: ");
scanf("%f", &m5);

printf("digite a media do aluno 6: ");
scanf("%f", &m6);

printf("digite a media do aluno 7: ");
scanf("%f", &m7);

printf("digite a media do aluno 8: ");
scanf("%f", &m8);

printf("digite a media do aluno 9: ");
scanf("%f", &m9);

printf("digite a media do aluno 10: ");
scanf("%f", &m10);

st=m1+m2+m3+m4+m5+m6+m7+m8+m9+m10;

mg=(m1+m2+m3+m4+m5+m6+m7+m8+m9+m10)/10;

printf("A soma das medias equivale a: %2.f e a media geral e de %f\n", st, mg);

if (m1 > m2 && m1 > m3 && m1 > m4 && m1 > m5 && m1 > m6 && m1 > m7 && m1 > m8 && m1 > m9 && m1 > m10)
printf("A maior media e do aluno 1:%2.f", m1);
else if (m2 > m1 && m2 > m3 && m2 > m4 && m2 > m5 && m2 > m6 && m2 > m7 && m2 > m8 && m2 > m9 && m2 > m10)
printf("A maior media e do aluno 2:%2.f", m2);
else if (m3 > m1 && m3 > m2 && m3 > m4 && m3 > m5 && m3 > m6 && m3 > m7 && m3 > m8 && m3 > m9 && m3 > m10)
printf("A maior media e do aluno 3:%2.f", m3);
else if (m4 > m1 && m4 > m2 && m4 > m3 && m4 > m5 && m4 > m6 && m4 > m7 && m4 > m8 && m4 > m9 && m4 > m10)
printf("A maior media e do aluno 4:%2.f", m4);
else if (m5 > m1 && m5 > m2 && m5 > m3 && m5 > m4 && m5 > m6 && m5 > m7 && m5 > m8 && m5 > m9 && m5 > m10)
printf("A maior media e do aluno 5:%2.f", m5);
else if (m6 > m1 && m6 > m2 && m6 > m3 && m6 > m4 && m6 > m5 && m6 > m7 && m6 > m8 && m6 > m9 && m6 > m10)
printf("A maior media e do aluno 6:%2.f", m6);
else if (m7 > m1 && m7 > m2 && m7 > m3 && m7 > m4 && m7 > m5 && m7 > m6 && m7 > m8 && m7 > m9 && m7 > m10)
printf("A maior media e do aluno 7:%2.f", m7);
else if (m8 > m1 && m8 > m2 && m8 > m3 && m8 > m4 && m8 > m5 && m8 > m6 && m8 > m7 && m8 > m9 && m8 > m10)
printf("A maior media e do aluno 8:%2.f", m8);
else if (m9 > m1 && m9 > m2 && m9 > m3 && m9 > m4 && m9 > m5 && m9 > m6 && m9 > m7 && m9 > m8 && m9 > m10)
printf("A maior media e do aluno 9:%2.f", m9);
else if (m10 > m1 && m10 > m2 && m10 > m3 && m10 > m4 && m10 > m5 && m10 > m6 && m10 > m7 && m10 > m8 && m10 > m9)
printf("A maior media e do aluno 10:%2.f", m10);
else 
printf("bololo");

if (m1 < m2 && m1 < m3 && m1 < m4 && m1 < m5 && m1 < m6 && m1 < m7 && m1 < m8 && m1 < m9 && m1 < m10)
printf("\nA menor media e do aluno 1:%2.f", m1);
else if (m2 < m1 && m2 < m3 && m2 < m4 && m2 < m5 && m2 < m6 && m2 < m7 && m2 < m8 && m2 < m9 && m2 < m10)
printf("\nA menor media e do aluno 2:%2.f", m2);
else if (m3 < m1 && m3 < m2 && m3 < m4 && m3 < m5 && m3 < m6 && m3 < m7 && m3 < m8 && m3 < m9 && m3 < m10)
printf("\nA menor media e do aluno 3:%2.f", m3);
else if (m4 < m1 && m4 < m2 && m4 < m3 && m4 < m5 && m4 < m6 && m4 < m7 && m4 < m8 && m4 < m9 && m4 < m10)
printf("\nA menor media e do aluno 4:%2.f", m4);
else if (m5 < m1 && m5 < m2 && m5 < m3 && m5 < m4 && m5 < m6 && m5 < m7 && m5 < m8 && m5 < m9 && m5 < m10)
printf("\nA menor media e do aluno 5:%2.f", m5);
else if (m6 < m1 && m6 < m2 && m6 < m3 && m6 < m4 && m6 < m5 && m6 < m7 && m6 < m8 && m6 < m9 && m6 < m10)
printf("\nA menor media e do aluno 6:%2.f", m6);
else if (m7 < m1 && m7 < m2 && m7 < m3 && m7 < m4 && m7 < m5 && m7 < m6 && m7 < m8 && m7 < m9 && m7 < m10)
printf("\nA menor media e do aluno 7:%2.f", m7);
else if (m8 < m1 && m8 < m2 && m8 < m3 && m8 < m4 && m8 < m5 && m8 < m6 && m8 < m7 && m8 < m9 && m8 < m10)
printf("\nA menor media e do aluno 8:%2.f", m8);
else if (m9 < m1 && m9 < m2 && m9 < m3 && m9 < m4 && m9 < m5 && m9 < m6 && m9 < m7 && m9 < m8 && m9 < m10)
printf("\nA menor media e do aluno 9:%2.f", m9);
else if (m10 < m1 && m10 < m2 && m10 < m3 && m10 < m4 && m10 < m5 && m10 < m6 && m10 < m7 && m10 < m8 && m10 < m9)
printf("\nA menor media e do aluno 10:%2.f", m10);
else 
printf("bololo");
}