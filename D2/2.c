/*Q4 Write a program to calculate the area and circumference of a circle given its radius.

Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85*/


#include<stdio.h>
#include<conio.h>
int main()
{
    int radius, area, circumference;

    // Input radius of the circle
    printf("Enter radius of the circle: ");
    scanf("%d", &radius);

    // Calculate area and circumference
    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;

    // Display area and circumference
    printf("Circumference = %d\n", circumference);
    printf("Area = %d\n", area);
    return 0;

}