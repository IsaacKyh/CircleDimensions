#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

int main()
{

    float inputRadie, centimeterRadie, diameter, circumference, area;
    // float area;
    // float omkrets;
    // float diameter;
    // float Radie;
    printf("Enter a radius (in meters): ");
    scanf("%f", &inputRadie);

    centimeterRadie = inputRadie * 100;
    diameter = centimeterRadie * 2;
    circumference = 2 * M_PI * centimeterRadie;
    area = M_PI * pow(inputRadie, 2);

    printf("\nDiameter in cm is: %f", diameter);

    printf("\nThe circumference in cm is: %f", circumference);

    printf("\nThe area in m^2 is: %f", area);

    return 0;
}