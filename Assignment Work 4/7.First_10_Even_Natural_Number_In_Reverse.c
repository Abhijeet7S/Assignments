/*
 * Assignment - 4
 * Question - 7
 * @topic - Iterative Control Statements
 * @author - Abhijeet Kumar singh
 */
 
 // Write a program to print the first 10 even natural numbers in reverse order
 
 #include<stdio.h>
 int main()
 {
 	int i = 2*10;
	while(i >= 1)
	{
		if((i % 2) == 0)
		{
			printf("%d\t", i);
		}
		i--;
	 } 
 	return 0;
 }
