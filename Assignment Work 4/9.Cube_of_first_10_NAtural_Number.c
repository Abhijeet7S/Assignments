/*
 * Assignment - 4
 * Question - 9
 * @topic - Iterative Control Statements
 * @author - Abhijeet Kumar singh
 */
 
 // Write a program to print cubes of the first 10 natural numbers
 
 #include<stdio.h>
 int main()
 {
 	int i = 1;
 	do
 	{
 		printf("Cube of %d = %d\n", i, (i*i*i));
 		i++;
	 }while(i <= 10);
	 return 0;
 }
