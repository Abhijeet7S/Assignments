/*
 * Assignment - 11
 * Question - 3
 * @topic - More on Functions
 * @author - Abhijeet Kumar Singh
 */
 
 //Write a function to check whether a given number is Prime or not. (TSRS)
 
 #include<stdio.h>
 int isPrime(int);
 int main()
 {
 	int n;
 	printf("Enter number:\n");
 	scanf("%d", &n);
 	int a = isPrime(n);
 	a == 1 ? printf("yes") : printf("No");
 	return 0;
 }
 int isPrime(int x)
 {
 	int i;
 	for(i = 2; i <= x/2; i++)
 	{
 		int k = 1;
 		if(x % i == 0)
 		{
 			k = 0;
 			return k;
 			break;
		 }
		 return k;
	 }
 }
