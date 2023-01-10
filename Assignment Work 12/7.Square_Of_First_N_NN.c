/*
 * Assignment - 12
 * Question - 7
 * @topic - Recursion
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a recursive function to print squares of first N natural numbers
 
 #include<stdio.h>
 void print(int);
 int main()
 {
 	int n;
 	printf("Enter Number:\n");
 	scanf("%d", &n);
 	print(n);
 	
 	return 0;
 }
 
 void print(int x)
 {
 	if(x == 0)
 	return;
 	print(x - 1);
 	printf("%d = %d\n", x, (x * x));
 }
