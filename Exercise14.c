/*
    You have to take four points(x1,y1,x2,y2) from the user using scanf(). To find the distance between these points, you will use the Euclidean distance formula.
        Formula : d = √[(x2 – x1)2 + (y2 – y1)2].
    Write a function that will calculate the Euclidean distance. This function will return an integer value.
    Write a function that tells the area of the circle whose radius is equal to the distance between x1,y1,x2,y2, and pass function pointer as an argument.
*/

#include <stdio.h>
#include <math.h>

float eDistance(int x1, int y1, int x2, int y2)
{
    return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)); /* Returning Euclidean Distance */
}

float areaOfCircle(int x1, int y1, int x2, int y2, float (*fptr)(int, int, int, int))
{
    int distance = (*fptr)(x1, y1, x2, y2);

    return 2 * 3.14 * pow(distance, 2); /* Returning area of circle taking euclidean distance as radius */
}

int main()
{
    int x1, y1, x2, y2;

    float (*fptr)(int, int, int, int);
    fptr = eDistance;

    printf("Enter x1 : ");
    scanf("%d", &x1);
    printf("Enter y1 : ");
    scanf("%d", &y1);
    printf("Enter x2 : ");
    scanf("%d", &x2);
    printf("Enter y2 : ");
    scanf("%d", &y2);

    printf("Area of circle : %f", areaOfCircle(x1, y1, x2, y2, fptr));

    return 0;
}
