/*
 * Assignment - 4
 * Question - 10
 * @topic - Iterative Control Statements
 * @author - Abhijeet Kumar singh
 */
 
 // Write a program to print a table of 5.
 
 #include<stdio.h>
 int main()
 {
 	int  i = 1;
 	do
 	{
 		printf("5 X %d = %d\n", i, (5*i));
 		i++;
	 }while(i <= 10);
	 return 0;
 }
