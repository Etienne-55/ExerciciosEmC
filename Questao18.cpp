/*18) Faca um programa C que leia dez numeros que representam as notas de dez alunos de 
uma disciplina. As notas variam de zero ate dez (0 a 10). O programa deve validar a entrada 
de dados e obter: a soma das notas, a media das notas, a maior nota, a menor nota. Assuma 
que as notas sao informadas corretamente no intervalo de 1 a 10.*/

#include <stdio.h>

int main() {
	int notas[10];
	for(int i = 0;i < 10;i++) {
		int nota;
		printf("Insira a nota do aluno %d: ", i + 1);
		while(fscanf(stdin, "%d", &nota)==1) {break;}
		notas[i] = nota;
	}

	int soma = 0;
	for(int i = 0;i < 10;i++) {
		soma += notas[i];
	}
	printf("Soma dos numeros: %d\n", soma);

	float media = (float) soma / 10;
	printf("Media dos numeros: %.2f\n", media);

	int maior = -2147483647;
	for(int i = 0;i < 10;i++) {
		if(notas[i] > maior) {
			maior = notas[i];
		}
	}
	printf("O maior numero: %d\n", maior);

	int menor = 2147483647;
	for(int i = 0;i < 10;i++) {
		if(notas[i] < menor) {
			menor = notas[i];
		}
	}
	printf("O menor numero: %d\n", menor);
	return 0;
}