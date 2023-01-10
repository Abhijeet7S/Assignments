
/*
 * Assignment  - 3
 * Question - 5
 * @topic : Decision Control Statement
 * @auhor : Abhijeet Kumar Singh
 */

 //Write a program to check whether a given number is a three digit number or not.

 #include<stdio.h>
 int main()
 {
     int num;
     printf("Enter number \n");
     scanf("%d", &num);
     if((num >99) && (num < 1000))
        printf("%d has Three Digit Number", num);
     else
        printf("%d has not Three Digit Number", num);
     return 0;
 }
