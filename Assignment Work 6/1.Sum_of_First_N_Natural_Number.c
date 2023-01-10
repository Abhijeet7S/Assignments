/*
 * Assignment - 6
 * Question - 1
 * @topic - Use any loop
 * @author - Abhijeet Kumar singh
 */
 
 //  Write a program to calculate sum of first N natural numbers
 
 #include<stdio.h>
 int main()
 {
 	int i = 1, sum = 0, n;
 	printf("Enter the Value of n\n");
 	scanf("%d", &n);
 	while(i <= n)
 	{
 		sum = sum + i;
 		i++;
 		
	 }
	 printf("Sum of First %d Natural Number = %d", n, sum);
 	return 0;
 }
