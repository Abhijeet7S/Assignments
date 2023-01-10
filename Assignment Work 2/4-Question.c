/*4. Write a program to swap values of two int variables without using a third variable.*/

#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter Two Number \n");
    scanf("%d %d", &a, &b);
    printf("a = %d & b = %d", a, b);
    b = a + b;
    a = b - a;
    b = b - a;
    printf("\nValue After Swap \na = %d & b = %d", a, b);
    return 0;
}
