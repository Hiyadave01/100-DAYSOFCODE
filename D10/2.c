/*Q20: Write a program to display the day of the week based on a number (1–7) using switch-case.

Sample Test Cases:
Input 1:
1
Output 1:
Monday

Input 2:
5
Output 2:
Friday*/
 
#include<stdio.h>

int main()
{
    int day;
    printf("Enter day number (1-7):");
    scanf("%d", &day);
    
    switch(day)
    {
        case 1: 
            printf("It is Monday.\n");
            break;
        case 2:
            printf("It is Tuesday.\n");
            break;
        case 3:
            printf("It is Wednesday.\n");
            break;      
        case 4:
            printf("It is Thursday.\n");
            break;      
        case 5:
            printf("It is Friday.\n");
            break;  
        case 6:
            printf("It is Saturday.\n");
            break;
        case 7:
            printf("It is Sunday.\n");
            break;
        default:
            printf("Invalid day number\n");
            break;
     
    }
    return 0;
}
