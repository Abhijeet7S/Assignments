/*
 * Assignment - 6
 * Question - 6
 * @topic - Use any loop
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a program to calculate factorial of a number
 
 #include<stdio.h>
 int main()
 {
 	int n, fact = 1;
 	printf("Enter number\n");
 	scanf("%d", &n);
 	while(n >= 1)
 	{
 		fact = fact * n;
 		n--;
	 }
	 printf("Factorial of %d = %d", n, fact);
 	return 0;
 }
