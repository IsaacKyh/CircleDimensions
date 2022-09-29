#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

int main()
{

    float inputRadie, circleRadie, diameter, circumference, area;
    // float area;
    // float omkrets;
    // float diameter;
    // float Radie;
    printf("Enter a radius (in meters): ");
    scanf("%f", &inputRadie);

    circleRadie = inputRadie * 100;
    diameter = circleRadie * 2;
    circumference = 2 * M_PI * circleRadie;
    area = M_PI * pow(inputRadie, 2);

    printf("\nDiameter in cm is: %f", diameter);

    printf("\nThe circumference in cm is: %f", circumference);

    printf("\nThe area in m^2 is: %f", area);

    return 0;
}