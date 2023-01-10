/*
 * Assignment  - 3
 * Question - 3
 * @topic : Decision Control Statement
 * @auhor : Abhijeet Kumar Singh
 */

 /*Write a program to check whether a given number is an even number or an odd
number
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d", &num);
    ((num%2) == 0) ? printf("%d is Even", num) : printf("%d is Odd",num);
    return 0;
}
