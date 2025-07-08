// Faça um programa que leia um inteiro n e determine a soma S da seguinte forma: 1 + 2 + 3
// + 4 + ... + n. Escreva duas versões de funções: iterativa e recursiva.

#include <stdio.h>
#include <stdlib.h>

int somar_iterativamente(int n){
    int soma = 0;

    for(int i = 1; i <= n; i++){
        soma += i;
    }

    return soma;
}

int somar_recursivamente(int n){
    if(n == 0){
        return 0;
    }
    return n + somar_recursivamente(n - 1);
}

void main(){
    int n, soma_iterativa, soma_recursiva;
    
    printf("Digite um numero inteiro: \n");
    scanf("%d", &n);

    soma_iterativa = somar_iterativamente(n);
    soma_recursiva = somar_recursivamente(n);

    printf("Soma iterativa: %d\n", soma_iterativa);
    printf("Soma recursiva: %d\n", soma_recursiva);

}   