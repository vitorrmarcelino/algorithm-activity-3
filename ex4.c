#include <stdlib.h>
#include <stdio.h>

int is_primo(int k){
    if(k <= 1){
        return 0;
    }

    for(int i = 2; i < k; i++){
        if(k%i==0){
            return 0;
        }
    }
    return 1;
}

int proximo_primo(int k){
    
    while(!is_primo(++k));
    return k;
}

void main(){
    int k, n;

    printf("Digite um numero: \n");
    scanf("%d", &k);

    printf("Quantos numeros primos acima desse numero voce deseja: \n");
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        int primo = proximo_primo(k);
        k = primo;
        printf("%d \n", primo);
    }
}
