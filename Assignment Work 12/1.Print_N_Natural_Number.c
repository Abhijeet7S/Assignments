/*
 * Assignment - 12
 * Question - 1
 * @topic - Recursion
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a recursive function to print first N natural numbers
 
 #include<stdio.h>
 void print(int n)
 {
 	if(n == 0)
 	return ;
 	print(n - 1);
 	printf("%d ", n);
 }
 int main()
 {
 	int n;
 	printf("Enter number:\n");
 	scanf("%d", &n);
 	print(n);
 	return 0;
 }
 
 
