/*2. Write a program to print a given number without its last digit.
*/

#include<stdio.h>
int main()
{
    int digit, result;
    printf("Enter Your Number \n");
    scanf("%d", &digit);
    result = digit/10;
    printf("Number without its Last Digit is %d", result);
    return 0;
}
