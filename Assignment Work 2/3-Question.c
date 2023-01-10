/*3. Write a program to swap values of two int variables
*/

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter two Number \n");
    scanf("%d %d", &a, &b);
    printf("Value of a = %d \nValue of b = %d\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("Value After Swapping \nValue of a = %d \nValue of b = %d", a, b);
    return 0;
}
