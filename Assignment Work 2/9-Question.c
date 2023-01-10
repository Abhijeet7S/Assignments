/*9. Write a program to make the last digit of a number stored in a variable as zero.
(Example - if x=2345 then make it x=2340)
*/

#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d", &x);
    x = x / 10;
    x = x * 10;
    printf(" x = %d", x);
    return 0;
}
