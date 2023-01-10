/*
 * Assignment - 3
 * Question - 15
 * @topic - Decision Control Statement
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a program to check whether a given number is positive, negative or zero.
 
 #include<stdio.h>
 int main()
 {
 	int num;
 	printf("Enter Number\n");
 	scanf("%d", &num);
 	if(num>0)
 	printf("Number is Positive");
 	else if(num<0)
 	printf("number is Negative");
 	else
 	printf("Number is Zero");
 	return 0;
 }
