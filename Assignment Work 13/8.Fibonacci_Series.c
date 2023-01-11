/*
 * Assignment - 13
 * Question - 8
 * @topic - More on Recursion
 * @author - Abhijeet Kumar singh
 */
 
 // Write a recursive function to print first N terms of Fibonacci series
 
 #include<stdio.h>
 int fab(int);
 int main()
 {
 	int n, i;
 	printf("Enter number:\n");
 	scanf("%d", &n);
 	for(i = 1; i <= n; i++)
 	printf("%d ",fab(i));
 	return 0;
 }
 
 int fab(int i)
 {
 	if(i == 1 || i == 2)
 	return 1;
 	else
 	return (fab(i -1) + fab(i - 2));
 	
 }
