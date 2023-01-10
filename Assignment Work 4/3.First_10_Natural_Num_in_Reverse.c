/*
 * Assignment - 4
 * Question - 3
 * @topic - Iterative Control Statements
 * @author - Abhijeet Kumar singh
 */
 
 // Write a program to print the first 10 natural numbers in reverse order
 
 #include<stdio.h>
 int main()
 {
 	int i = 10;
 	while( i >= 1)
 	{
 		printf("%d\t", i);
 		i--;
	 }
	 
	 printf("\n*****************************************************\n");
	 
 	for(i = 10; i >= 1; i--)
 	printf("%d\t", i);
 
	 return 0;
 }
