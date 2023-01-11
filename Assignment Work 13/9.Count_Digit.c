/*
 * Assignment - 13
 * Question - 9
 * @topic - More on Recursion
 * @author - Abhijeet Kumar singh
 */
 
 // Write a program in C to count the digits of a given number using recursion.
 
 #include<stdio.h>
 void count(int x)
 {
 	static int c = 0;
 	if(x == 0)
 	{
 		printf("%d", c);
     	return;
	 }
 	
 	c++;
 	count(x / 10);
 	
 	
 	
 }
 int main()
 {
 	int n;
 	scanf("%d", &n);
 	count(n);
 }
