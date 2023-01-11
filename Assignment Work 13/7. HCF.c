/*
 * Assignment - 13
 * Question - 7
 * @topic - More on Recursion
 * @author - Abhijeet Kumar singh
 */
 
 // Write a recursive function to calculate HCF of two numbers
 
 #include<stdio.h>
 int hcf(int, int);
 int main()
 {
 	int a, b;
 	printf("Enter Two number:\n");
 	scanf("%d %d", &a, &b);
 	printf("HCF of %d and %d = %d",a, b, hcf(a, b));
 	return 0;
 }
 
 int hcf(int a, int b)
 {
 	if(a == b)
 	return a;
 	if(a % b == 0)
 	return b;
 	if(b % a == 0)
 	return a;
 	if(a > b)
 	return (hcf(a % b, b));
 	else
 	return (hcf(a, b % a));
 }
 
 
