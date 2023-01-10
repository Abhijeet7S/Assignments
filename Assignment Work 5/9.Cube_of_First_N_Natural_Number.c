/*
 * Assignment - 5
 * Question - 9
 * @topic - Iterative Control Statements
 * @author - Abhijeet Kumar singh
 */
 
 // Write a program to print cubes of the first N natural numbers
 
 #include<stdio.h>
 int main()
 {
 	int i, n;
 	printf("Enter a Number\n");
 	scanf("%d", &n);
 	for(i = 1; i <= n; i++)
 	{
 		printf("Cube of %d = %d\n", i, (i * i * i));
	 }
 	return 0;
 }
