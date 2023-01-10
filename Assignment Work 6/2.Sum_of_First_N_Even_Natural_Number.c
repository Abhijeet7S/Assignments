/*
 * Assignment - 6
 * Question - 2
 * @topic - Use any loop
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a program to calculate sum of first N even natural numbers
 
 #include<stdio.h>
 int main()
 {
 	int i = 1, n, sum = 0;
 	printf("Enter VAlue of N\n");
 	scanf("%d", &n);
 	do
 	{
 		if((i % 2) == 0)
 		{
 			sum = sum + i;

		 }
		 i++;
		 
		 
	 }while(i <= (2 * n));
	 printf("Sum of First %d Even Natural Number = %d\n", n, sum);
 	return 0;
 }
