/*1. Write a program to print unit digit of a given number
*/

#include<stdio.h>
int main()
{
    int digit, result;
    printf("Enter Your Digit \n");
    scanf("%d", &digit);
    result = digit % 10;
    printf("Unit Digit of a Number is %d", result);
    return 0;
}
