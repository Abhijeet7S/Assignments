/*
 * Assignment - 12
 * Question - 6
 * @topic - Recursion
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a recursive function to print first N even natural numbers in reverse order
 
 #include<stdio.h>
 void print(int x)
 {
 	if(x == 0)
 	return;
 	printf("%d ", (2 * x));
 	print(x -1);
 }
 int main()
 {
 	int n;
 	printf("Enter a Number:\n");
 	scanf("%d", &n);
 	print(n);
 	return 0;
 }
