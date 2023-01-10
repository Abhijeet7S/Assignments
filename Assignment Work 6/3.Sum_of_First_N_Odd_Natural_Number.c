/*
 * Assignment - 6
 * Question - 3
 * @topic - Use any loop
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a program to calculate sum of first N odd natural numbers
 #include<stdio.h>
 int main()
 {
 	int i = 1, n, sum = 0;
 	printf("Enter Value of N\n");
 	scanf("%d", &n);
 	while(i < (2 * n))
 	{
 		if((i % 2) != 0)
		 {
		 	sum = sum + i;
		 }
		 i++;
	 }
	 printf("Sum of First %d Odd Natural Number = %d", n, sum);
 	return 0;
 }
