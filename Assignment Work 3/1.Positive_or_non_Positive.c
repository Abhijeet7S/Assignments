/*
 * Assignment  - 3
 * Question - 1
 * @topic : Decision Control Statement
 * @auhor : Abhijeet Kumar Singh
 */

 //Write a program to check whether a given number is positive or non positive.

 #include<stdio.h>
 int main()
 {
     int number;
     printf("Enter a number\n");
     scanf("%d", &number);
     if(number<0)
        printf("%d is non positive number", number);
     else if(number>0)
        printf("%d is a positive number", number);
     else
        printf("%d is neither positive nor non positive number", number);
     return 0;
 }

