#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float calcularAreaQuadrado(float x, float y);
    
    float area = calcularAreaQuadrado(10.0, 20.0);

    printf("A area e %f", area);

    return 0;
}

float calcularAreaQuadrado(float x, float y)
{
    float area = x  * y; 
    return area;
}