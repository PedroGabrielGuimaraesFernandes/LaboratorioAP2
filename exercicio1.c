#include <stdio.h>

int main(){
    //declaração de variaveis
    float a;
    float b;
    float c;

    //recebe os valores do usuario
    printf("Digite o valor de 'a' e 'b' : \n");
    scanf("%f %f", &a, &b);

    c = a + b;
    printf("A soma de a e b é %.2f\n", c);
    c = a - b;
    printf("A subtração de a e b é %.2f\n", c);
    c = a * b;
    printf("A multiplicação deles é %.2f\n", c);
    c = a/b;
    printf("A divisão deles é %.2f\n", c);    
    return 0;
}