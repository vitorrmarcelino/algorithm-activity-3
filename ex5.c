#include <stdlib.h>
#include <stdio.h>

int fibo(int n){
    int ultimo_digito = 1, penultimo_digito = 0, digito_atual = 0;
    
    for(int i = 0; i < n; i++){
        switch(i){
            case 0:
                printf("0 \n");
                break;
            case 1:
                printf("1 \n");
                break;
            default:
                digito_atual = ultimo_digito + penultimo_digito;
                printf("%d \n", digito_atual);
                penultimo_digito = ultimo_digito;
                ultimo_digito = digito_atual;
                break;
        }
    }
}

void main(){
    int n;

    printf("Digite um numero (N primeiros numeros de fibonacci): \n");
    scanf("%d", &n);

    fibo(n);
}