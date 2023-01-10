/*
 * Assignment - 12
 * Question - 2
 * @topic - Recursion
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a recursive function to print first N natural numbers in reverse order
 
 #include<stdio.h>
 void print(int n)
 {
 	if( n == 0)
 	return;
 	printf("%d ", n);
 	print(n - 1);
 }
 int main()
 {
 	int n;
 	printf("Enter a number:\n");
 	scanf("%d", &n);
 	print(n);
 	return 0;
 }
