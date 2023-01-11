/*
 * Assignment - 13
 * Question - 10
 * @topic - More on Recursion
 * @author - Abhijeet Kumar singh
 */
 
 // Write a program in C to calculate the power of any number using recursion.
 
 #include<stdio.h>
 int power(int, int);
 int main()
 {
 	int base, exp;
 	printf("Enter base number:\n");
 	scanf("%d", &base);
 	printf("Enter exponent number:\n");
 	scanf("%d", &exp);
 	int result = power(base, exp);\
 	printf("%d", result);
 	return 0;
 }
 int power(int base, int exp)
 {
 	if(exp == 0)
 	return 1;
 	return (base * power(base, exp -1));
 }
