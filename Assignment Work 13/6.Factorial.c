/*
 * Assignment - 13
 * Question - 6
 * @topic - More on Recursion
 * @author - Abhijeet Kumar singh
 */
 
 // Write a recursive function to calculate factorial of a given number
 
 #include<stdio.h>
 int fact(int);
 int main()
 {
 	int num;
 	printf("Enter number:\n");
 	scanf("%d", &num);
 	printf("Factorial of %d = %d", num, fact(num));
 	return 0;
 }
 
 int fact(int n)
 {
 	if(n == 1)
 	return 1;
 	else
 	return (n * fact(n - 1));
 }
