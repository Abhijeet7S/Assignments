/*5. Write a program to input a three digit number and display the sum of the digits.
*/

#include<stdio.h>
int main()
{
    int a, sum = 0;
    printf("Enter Three Number\n");
    scanf("%d", &a);
    sum += a % 10;
    a = a / 10;
    sum += a % 10;
    a = a / 10;
    sum = sum + a;
    printf("Sum of digit = %d", sum);
    return 0;
}
