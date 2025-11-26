/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2*/

#include<stdio.h>
int main()
{
    float Seconds, Minutes, Hours;
    printf("Enter time in Seconds:");
    scanf("%f", &Seconds);

    Minutes = Seconds / 60;
    Hours = Minutes / 60;
    printf(" Hours : Minutes : Seconds = %.2f : %.2f : %.2f\n", Hours, Minutes, Seconds);

    return 0;
}
