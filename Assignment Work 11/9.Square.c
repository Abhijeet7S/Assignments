/*
 * Assignment - 11
 * Question - 9
 * @topic - More on Functions
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a program in C to find the square of any number using the function
 
 #include<stdio.h>
 int sqr(int n)
 {
 	return (n *n);
 }
 int main()
 {
 	int n;
 	printf("Enter number:\n");
 	scanf("%d", &n);
 	printf("sqr of %d = %d", n, sqr(n));
 	return 0;
 }
