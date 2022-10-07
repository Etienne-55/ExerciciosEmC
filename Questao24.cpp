/*24) Codifique um programa que indique a quantidade minima de cedulas equivalente a uma 
dada quantia. Considere apenas valores inteiros e cedulas de 1, 5, 10, 20, 50 e 100 reais.*/

#include<stdio.h>

int realizarSaque(int valor, int *cedulas){
    int n200,n100,n50,n20,n10,n5,n2;

    n200=valor/200;
    n100=(valor%200)/100;
    n50=((valor%200)%100)/50;
    n20=(((valor%200)%100)%50)/20;
    n10=((((valor%200)%100)%50)%20)/10;
    n5=(((((valor%200)%100)%50)%20)%10)/5;
    n2=((((((valor%200)%100)%50)%20)%10)%5)/2;
    
    printf("%d cedula(s) de 200.00",n200);
    printf("\n%d cedula(s) de 100.00",n100);       
    printf("\n%d cedula(s) de 50.00",n50);
    printf("\n%d cedula(s) de 20.00",n20);
    printf("\n%d cedula(s) de 10.00",n10);
    printf("\n%d cedula(s) de 5.00",n5);
    printf("\n%d cedula(s) de 2.00",n2);
    return 0;
    }

int main()
{
    int valor, cedulas[7] = {200, 100, 50, 20, 10, 5, 2};
    
    printf("Digite o valor a ser sacado: ");
    scanf("%d", &valor);
    
    if(valor == 1 || valor == 3){
        printf("nao e possivel sacar o valor solicitado");
        return 0;
    }
    if(valor > 0){
    realizarSaque(valor, cedulas);
    return 0;
    }
    if(valor <= 0){
        printf("Informe um valor maior que 0");
        return 0;
    }
    else{
        main();
    }
    return 0;
}