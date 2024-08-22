#include <stdio.h>

int main(int argc, char const *argv[])
{
    float tempC;
    float tempF;

    printf("Qual a temperatura(°C) atual?\n");
    scanf("%f", &tempC);

    tempF = (9.0/5.0) * tempC + 32;

    printf("Uma temperatura de %.2f graus Celsius equivale a %.2f graus Fahrenheit.", tempC, tempF);

    return 0;
}
