/*
 * Assignment  - 3
 * Question - 4
 * @topic : Decision Control Statement
 * @auhor : Abhijeet Kumar Singh
 */

 /* Write a program to check whether a given number is an even number or an odd
number without using % operator.
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    ((num & 1)) ? printf("%d is Odd", num) : printf("%d is Even", num);
    return 0;
}
