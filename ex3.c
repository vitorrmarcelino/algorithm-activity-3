#include <stdlib.h>
#include <stdio.h>

int soma_impares_entre_numeros(int x, int y){
    int soma;

    if(x<y){
        for(x++; x<y;x++){
            if(x%2!=0){
                soma += x;
            }
        }
    }else{
        for(y++; y<x;y++){
            if(y%2!=0){
                soma += y;
            }
        }
    }

    return soma;
}

void main(){
    int x, y, soma;

    printf("Insira o primeiro numero: \n");
    scanf("%d", &x);

    printf("Insira o segundo numero: \n");
    scanf("%d", &y);

    soma = soma_impares_entre_numeros(x, y);

    printf("A soma dos numeros impares entre eles e de: %d \n", soma);

}