/*
 * Assignment - 7
 * Question - 2
 * @topic - Level up with loops
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a program to print first N terms of Fibonacci series
 
 #include<stdio.h>
 int main()
 {
 	int n, i, a = 0, b =1, c = 0;
 	printf("Enter terms\n");
 	scanf("%d", &n);
 	printf("%d\t%d\t", a, b);
 	for(i = 2; i < n; i++)
 	{
 		c = a + b;
 		printf("%d\t", c);
 		a = b;
 		b = c;
	 }
 	return 0;
 }
