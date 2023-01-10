/*
 * Assignment - 4
 * Question - 6
 * @topic - Iterative Control Statements
 * @author - Abhijeet Kumar singh
 */
 
 // Write a program to print the first 10 even natural numbers
 
 #include<stdio.h>
 int main()
 {
 	int i = 1, x = 2;
 	while(i <= 10)
 	{
 		printf("%d\t", x);
 		x = x+2;
 		i++;
	 }
 	return 0;
 }
