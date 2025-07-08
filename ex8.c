// Faça um programa que leia um inteiro n e determine a soma S da seguinte forma: 1 + 2 + 3
// + 4 + ... + n. Escreva duas versões de funções: iterativa e recursiva.

#include <stdio.h>
#include <stdlib.h>

float somar_iterativamente(int n){
    float soma = 1.0;

    for(int i = 2; i <= n; i++){
        soma += 1.0/i;
    }

    return soma;
}

float somar_recursivamente(float n){
    if(n == 1){
        return 1;
    }
    return 1.0/n + somar_recursivamente(n - 1);
}

void main(){
    int n; 
    float soma_iterativa, soma_recursiva;
    
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    soma_iterativa = somar_iterativamente(n);
    soma_recursiva = somar_recursivamente(n);

    printf("Soma iterativa: %f\n", soma_iterativa);
    printf("Soma recursiva: %f\n", soma_recursiva);

}   