/*
 * Assignment - 5
 * Question - 8
 * @topic - Iterative Control Statements
 * @author - Abhijeet Kumar singh
 */
 
// Write a program to print squares of the first N natural numbers

#include<stdio.h>
int main()
{
	int i, n;
	printf("Enter a Number\n");
	scanf("%d", &n);
	for(i = 1; i <= n; i++)
	{
		printf("Square of %d = %d\n", i, (i *i));
	}
	return 0;
}
