/*12. Write a program to take a three digit number from the user and rotate its digits by
one position towards the right.
*/

#include<stdio.h>
int main()
{
    int num;
    printf("Enter Three Digit Number\n");
    scanf("%d", &num);
   /* int div = num / 10;
    int rem = num % 10;
    int result = rem * 100 + div;
    printf("Number = %d & Number After Rotation = %d", num, result);
    */
    num = ((num % 10) * 100) + (num / 10);
    printf("Number after right ratation is %d",num);
    return 0;
}
