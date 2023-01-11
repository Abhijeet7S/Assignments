/*
 * Assignment - 13
 * Question - 3
 * @topic - More on Recursion
 * @author - Abhijeet Kumar singh
 */
 
 // Write a recursive function to calculate sum of first N even natural numbers
 
 #include<stdio.h>
 int evenSum(int n)
 {
 	if(n == 1)
 	return 2;
 	return (2 * n) + evenSum(n - 1);
 }
 
 int main()
 {
 	int n;
 	printf("Enter any positive integer number:\n");
 	scanf("%d", &n);
 	printf("%d", evenSum(n));
 	return 0;
 }
