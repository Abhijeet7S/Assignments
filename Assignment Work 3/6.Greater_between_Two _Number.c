/*
 * Assignment  - 3
 * Question - 6
 * @topic : Decision Control Statement
 * @auhor : Abhijeet Kumar Singh
 */

 /* Write a program to print greater between two numbers. Print one number if both are
the same.
*/

#include<stdio.h>

int main()
{
    int num_1, num_2;
    printf("Enter Two Number\n");
    scanf("%d %d", &num_1, &num_2);
    if(num_1 > num_2)
        printf("%d is Greater", num_1);
    else if(num_1 == num_2)
        printf("Both are Equal, Number = %d", num_1);
    else
        printf("%d is Greater", num_2);
    return 0;
}
