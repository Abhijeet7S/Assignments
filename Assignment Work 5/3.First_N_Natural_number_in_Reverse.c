/*
 * Assignment - 5
 * Question - 3
 * @topic - Iterative Control Statements
 * @author - Abhijeet Kumar singh
 */
 
 // Write a program to print the first N natural numbers in reverse order
 
 #include<stdio.h>
 int main()
 {
 	int i, n;
 	printf("Enter A Number\n");
 	scanf("%d", &n);
 	for(i = n; i >= 1; i--)
 	printf("%d\t", i);
 	
 	return 0;
 }
 
