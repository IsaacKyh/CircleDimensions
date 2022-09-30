#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <math.h>

int main()
{
    // Variables
    const int CM_CONVERTER = 100;
    float inputRadie, centimeterRadie, diameter, circumference, area;

    // Input
    printf("Enter a radius (in meters): ");
    scanf("%f", &inputRadie);

    // Calculations
    centimeterRadie = inputRadie * CM_CONVERTER;
    diameter = centimeterRadie * 2;
    circumference = 2 * M_PI * centimeterRadie;
    area = M_PI * pow(inputRadie, 2);

    // Outputs
    printf("\nDiameter in cm is: %f", diameter);

    printf("\nThe circumference in cm is: %f", circumference);

    printf("\nThe area in m^2 is: %f", area);

    return 0;
}