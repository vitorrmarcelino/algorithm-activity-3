#include <stdlib.h>
#include <stdio.h>

#define MAX 3

int maior_numero(int vect[], int max){
    int maior = vect[0];

    for(int i = 1; i < max; i++){
        if(vect[i]>maior){
            maior = vect[i];
        }
    }

    return maior;
}

void main(){
    int vect[MAX], maior;

    for(int i = 0; i<MAX; i++){
        printf("Insira um numero \n");
        scanf("%d", &vect[i]);
    }

    maior = maior_numero(vect, MAX);

    printf("O maior numero e %d \n", maior);

}


