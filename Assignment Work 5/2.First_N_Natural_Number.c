/*
 * Assignment - 5
 * Question - 2
 * @topic - Iterative Control Statements
 * @author - Abhijeet Kumar singh
 */
 
 // Write a program to print the first N natural numbers.
 
 #include<stdio.h>
 int main()
 {
 	int i, n;
 	printf("Enter Number\n");
 	scanf("%d", &n);
 	for(i = 1; i <= n; i++)
 	printf("%d\t", i);
 	
 	return 0;
 }
