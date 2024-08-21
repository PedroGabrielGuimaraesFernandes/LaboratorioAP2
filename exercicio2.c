#include <stdio.h>

int main(int argc, char const *argv[])
{
    float altura;
    float peso;
    float imc;

    printf("Qual a sua seu peso?\n");
    scanf("%f", &peso);
    printf("Qual a sua altura?\n");
    scanf("%f", &altura);

   //calculo do IMC
    imc = peso/(altura * altura);

    printf("O IMC de uma pessoa com peso %.2fkg e altura %.2fm é igual a %.2f", peso, altura, imc);

    return 0;
}
