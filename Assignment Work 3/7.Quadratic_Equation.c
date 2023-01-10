/*
 * Assignment  - 3
 * Question - 7
 * @topic : Decision Control Statement
 * @auhor : Abhijeet Kumar Singh
 */

 /* Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots
*/

 #include<stdio.h>
 int main()
 {
     int a, b, c;
     float discriminant;
     printf("Enter Value of A, B and C\n");
     scanf("%d %d %d", &a, &b, &c);
     discriminant =b * b - 4 * a * c;
     if(discriminant>0)
        printf("Root are real and distinct");
     else if(discriminant == 0)
        printf("Root are real and equal");
     else
        printf("Root are imaginary");
     return 0;
 }
