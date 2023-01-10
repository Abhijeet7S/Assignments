/*
 * Assignment  - 3
 * Question - 9
 * @topic : Decision Control Statement
 * @auhor : Abhijeet Kumar Singh
 */

 /*  Write a program to find the greatest among three given numbers. Print number once
if the greatest number appears two or three times.
*/

#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of A, B and C\n");
    scanf("%d %d %d", &a, &b, &c);
    if((a>=b) && (a>=c))
    {
       printf("%d is greater\n", a);
       if((a == b) || (a == c))
            printf("A = %d", a);
    }

    else if((b>=c) && (b>=a))
    {
        printf("%d is greater\n", b);
        if((b == c) || (b == a))
            printf("B = %d",b);
    }

    else
    {
       printf("%d is greater\n", c);
        if((c == a)|| (c==b))
            printf("C = %d",c);
    }



            return 0;

}
