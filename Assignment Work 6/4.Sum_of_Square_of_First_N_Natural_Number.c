/*
 * Assignment - 6
 * Question - 4
 * @topic - Use any loop
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a program to calculate sum of squares of first N natural numbers
 
 #include<stdio.h>
 int main()
 {
 	int i, n, sum = 0;
 	printf("Enter the value of n \n");
 	scanf("%d", &n);
 	for(i = 1; i <= n; i++)
 	{
 		sum = sum + (i *i);
	 }
	 printf("Sum of Square Of First %d Natural Number = %d", n, sum);
 	return 0;
 }
