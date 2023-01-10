/*
 * Assignment  - 3
 * Question - 8
 * @topic : Decision Control Statement
 * @auhor : Abhijeet Kumar Singh
 */

 // Write a program to check whether a given year is a leap year or not.
 #include<stdio.h>
 int main()
 {
     int year;
     printf("Enter year\n");
     scanf("%d", &year);
     if((year % 4) == 0 && (year % 100) != 0 || (year %400) == 0)
        printf("%d is a Leap Year", year);
     else
        printf("%d is not a Leap Year", year);
     return 0;
 }
