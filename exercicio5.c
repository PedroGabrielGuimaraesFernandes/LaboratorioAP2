#include <stdio.h>
#include <math.h>

int main()
{
    float r;
    float area;
    
    printf("Diga o raio?\n");
    scanf("%f", &r);

    area = M_PI * r * r;

    printf("Um círculo com raio %.2f tem área igual a %.2f.", r, area);

    return 0;
}
