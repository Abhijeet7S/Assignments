/*
 * Assignment - 11
 * Question - 4
 * @topic - More on Functions
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a function to find the next prime number of a given number. (TSRS)
 
 #include<stdio.h>
 int nextPrime(int);
 int main()
 {
 	int n;
 	printf("Enter Your Number:\n");
 	scanf("%d", &n);
 	int ans = nextPrime(n);
 	printf("%d", ans);
 	return 0;
 }
 int nextPrime(int x)
 {
 	int i = x + 1;
 	while(i)
 	{
 		int j;
 		for(j = 2; j < i; j++)
 		{
 			if(i % j == 0)
 			{
 					break;
			 }
 			
		 }
		 if(i == j)
		 {
		 	return i;
		 	break;
		 }
		 i++;
		 
	 }
 }
