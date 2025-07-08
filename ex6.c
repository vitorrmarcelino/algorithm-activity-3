// Escreva uma função que calcula o somatório dos n termos que são múltiplos de k a partir
// de x. Os parâmetros são determinados pelo usuário e a função é chamada pelo programa
// principal, que em seguida mostra o resultado na tela. Exemplo: para n = 3, k = 4 e x = 18,
// temos, 20 + 24 + 28 = 72. Protótipo da função:

#include <stdio.h>
#include <stdlib.h>

int soma_especial(int k, int n, int x){
    int soma, i = 0;

    for(x++; i < n; x++){
        if(x%k==0){
            i++;
            soma += x;
        }
    }

    return soma;
}

void main(){
    int k, n, x;

    printf("Quantidade: \n");
    scanf("%d", &n);

    printf("Multiplo de: \n");
    scanf("%d", &k);

    printf("A partir de: \n");
    scanf("%d", &x);

    printf("Soma especial: %d \n", soma_especial(k, n, x));
}