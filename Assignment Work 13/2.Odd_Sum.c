/*
 * Assignment - 13
 * Question - 2
 * @topic - More on Recursion
 * @author - Abhijeet Kumar singh
 */
 
 // Write a recursive function to calculate sum of first N odd natural numbers
 
 #include<stdio.h>
 int oddSum(int);
 int main()
 {
 	int n;
 	printf("Enter a positive integer:\n");
 	scanf("%d", &n);
 	printf("%d", oddSum(n));
 	return 0;
 }
 
 int oddSum(int n)
 {
 	if(n == 1)
 	return 1;
 	return (2 * n -1) + oddSum(n -1);
 }
