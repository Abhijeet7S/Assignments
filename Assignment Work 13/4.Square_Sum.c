/*
 * Assignment - 13
 * Question - 4
 * @topic - More on Recursion
 * @author - Abhijeet Kumar singh
 */
 
 // Write a recursive function to calculate sum of squares of first n natural numbers
 
 #include<stdio.h>
 int squareSum(int);
 int main()
 {
 	int n;
 	printf("Enter Positive Number:\n");
 	scanf("%d", &n);
 	printf("%d", squareSum(n));
 	return 0;
 }
 int squareSum(int n)
 {
 	if(n == 1)
 	return 1;
 	return ((n * n) + squareSum(n - 1));
 }
