/*
 * Assignment - 13
 * Question - 5
 * @topic - More on Recursion
 * @author - Abhijeet Kumar singh
 */
 
 // Write a recursive function to calculate sum of digits of a given number
 
 #include<stdio.h>
 int sumOfDigit(int);
 int main()
 {
 	int num;
 	printf("Enter number:\n");
 	scanf("%d", &num);
 	printf("%d", sumOfDigit(num));
 	return 0;
 }
 int sumOfDigit(int n)
 {
 	if(n == 0)
 	return;
 	return ((n % 10) + sumOfDigit(n / 10));
 }
