#include <stdlib.h>
#include <stdio.h>

int tipo_triangulo(float a, float b, float c){
    if(((a+b)<=c) || ((a+c)<=b) || ((b+c)<=a)){
        return 0; 
    }
    else if((a==b) && (a==c)){
        return 1; 
    }
    else if((a==b) || (a==c) || (b==c)){
        return 2;
    }
    else{
        return 3; 
    }
}

void main(){
    float a, b, c;
    int result;

    printf("Medida do primeiro lado: \n");
    scanf("%f", &a);

    printf("Medida do primeiro lado: \n");
    scanf("%f", &b);

    printf("Medida do primeiro lado: \n");
    scanf("%f", &c);

    result = tipo_triangulo(a, b, c);

    switch(result){
        case 0:
            printf("nao e um triangulo \n");
            break;
        case 1:
            printf("equilatero \n");
            break;
        case 2:
            printf("isoceles \n");
            break;
        case 3:
            printf("escaleno \n");
            break;
    }
}

