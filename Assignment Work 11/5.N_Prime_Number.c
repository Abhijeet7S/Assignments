/*
 * Assignment - 11
 * Question - 5
 * @topic - More on Functions
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a function to print first N prime numbers (TSRN)
 
 #include<stdio.h>
 void firstNPrime(int);
 int main()
 {
 	int n;
 	printf("Enter Number:\n");
 	scanf("%d", &n);
 	firstNPrime(n);
 	return 0;
 }
 void firstNPrime(int n)
 {
 	int i, j, count = 0;
 	for(i = 2; ; i++)
 	{
 		for(j = 2; j < i; j++)
 		{
 			if(i % j == 0)
 			{
 				break;
			 }
			
		 }
		 if(i == j)
		 {
		 	 printf("%d\t", i);
			 count++;
		 }
		 if(count == n)
		 break;
	 }
 }
