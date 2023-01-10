/*
 * Assignment - 11
 * Question - 6
 * @topic - More on Functions
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a function to print all Prime numbers between two given numbers. (TSRN)
 
 #include<stdio.h>
 void primeNumber(int x, int y)
 {
 	int i, j;
 	for(i = x; i <= y; i++)
 	{
 		for(j = 2; j < i; j++)
 		{
 			if(i % j == 0)
 			break;
		 }
		 if(i == j)
		 printf("%d\t", i);
	 }
 }
 int main()
 {
 	int a, b;
 	printf("Enter Two Number:\n");
 	scanf("%d %d", &a, &b);
 	primeNumber(a, b);
 	return 0;
 }
