/*
 * Assignment - 5
 * Question - 4
 * @topic - Iterative Control Statements
 * @author - Abhijeet Kumar singh
 */
 
 // Write a program to print the first N odd natural numbers
 
 #include<stdio.h>
 int main()
 {
 	int i, n;
	 printf("Enter a Number\n");
	 scanf("%d", &n);
	 for(i = 1; i <= ((2*n) -1); i++)
	 {
	 	if((i % 2) != 0)
	 	printf("%d\t", i);

	 }
 	return 0;
 }
