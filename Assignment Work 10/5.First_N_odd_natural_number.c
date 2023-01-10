/*
 * Assignment - 10
 * Question - 5
 * @topic - Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /*
  Write a function to print first N odd natural numbers. (TSRN)
 */
 
 #include<stdio.h>
 void odd(int);
 int main()
 {
 	int n;
 	printf("Enter n Number\n");
 	scanf("%d", &n);
 	odd(n);
 	return 0;
 }
 void odd(int x)
 {
 	int n = 1;
 	while(n <= (2 * x - 1))
 	{
 		if(n % 2 != 0)
 		printf("%d\t", n);
 		n++;
	 }
 	
 }
