/*
 * Assignment  - 3
 * Question - 2
 * @topic : Decision Control Statement
 * @auhor : Abhijeet Kumar Singh
 */

 // Write a program to check whether a given number is divisible by 5 or not

 #include<stdio.h>
 int main()
 {
     int num;
     printf("Enter a number\n");
     scanf("%d", &num);
     if((num % 5) == 0)
        printf("%d is divisible by 5",num);
     else
        printf("%d is not divisible by 5", num);
     return 0;

 }
