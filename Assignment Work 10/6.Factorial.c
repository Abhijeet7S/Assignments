/*
 * Assignment - 10
 * Question - 6
 * @topic - Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /*
  Write a function to calculate the factorial of a number. (TSRS)
 */
 
 #include<stdio.h>
 int fact(int);
 int main()
 {
 	int n, f;
 	printf("Enter Number:\n");
 	scanf("%d", &n);
 	f = fact(n);
 	printf("Factorial of %d = %d", n, f);
 	return 0;
 }
 int fact(int x)
 {
 	int i, f = 1;
 	for(i = x; i >= 1; i--)
 	{
 		f = f * i;
	 }
	 return f;
 }
