/*
 * Assignment - 12
 * Question - 5
 * @topic - Recursion
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a recursive function to print first N even natural numbers
 
 #include<stdio.h>
 void print(int x)
 {
 	if(x == 0)
 	return;
 	print(x -1);
 	printf("%d ", (2 * x));
 }
 int main()
 {
 	int n;
 	printf("Enter a Number:\n");
 	scanf("%d", &n);
 	print(n);
 	return 0;
 }
