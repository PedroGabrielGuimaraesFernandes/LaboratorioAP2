#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    float cateto1;
    float cateto2;
    float hipotenusa;

    printf("Diga o valor dos dois catetos?\n");
    scanf("%f %f", &cateto1, &cateto2);

    
    hipotenusa = sqrtf(cateto1 * cateto1 + cateto2 * cateto2);

    printf("Um triângulo retângulo com lados %.2f e %.2f tem uma hipotenusa igual a %.2f.", cateto1, cateto2, hipotenusa);

    return 0;
}
