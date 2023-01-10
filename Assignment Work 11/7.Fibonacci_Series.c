/*
 * Assignment - 11
 * Question - 7
 * @topic - More on Functions
 * @author - Abhijeet Kumar Singh
 */
 
 //Write a function to print first N terms of Fibonacci series (TSRN)
 
 #include<stdio.h>
 void fab(int n)
 {
 	int a = 0, b = 1, c;
 	printf("%d\t", a);
 	printf("%d\t", b);
 	while(n-2)
 	{
 		c = a + b;
 		printf("%d\t", c);
 		a = b;
 		b = c;
 		n--;
	 }
 }
 int main()
 {
 	int n;
 	printf("Enter Number:\n");
 	scanf("%d", &n);
 	fab(n);
 	return 0;
 }
