/**
 *	author : sheikhlimon
 *	created : 15.05.2022
 **/

#include <stdio.h>
#include <string.h>
#include <math.h>

double getDiameter(double radius);
double getCircumference(double radius);
double getArea(double radius);

int main()
{
    float radius, dia, circ, area;

    // input radius of circle from user
    printf("Enter radius of circle: ");
    scanf("%f", &radius);

    dia = getDiameter(radius);
    circ = getCircumference(radius);
    area = getArea(radius);

    printf("Diameter of the circle = %.2f units\n", dia);
    printf("Circumference of the circle = %.2f units\n", circ);
    printf("Area of the circle = %.2f sq. units", area);

    return 0;
}

// calculate diameter of circle whose radius is given
double getDiameter(double radius)
{
    return (2 * radius);
}

// calculate circumference of cirlce whose radius is given
double getCircumference(double radius)
{
    return (2 * M_PI * radius); // M_PI = PI = 3.14...
}

// find area of circle whose radius is given
double getArea(double radius)
{
    return (M_PI * radius * radius); // M_PI = PI = 3.14...
}