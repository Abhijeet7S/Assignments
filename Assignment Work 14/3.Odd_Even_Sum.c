/*
 * Assignment - 14
 * Question - 3
 * @topic - Arrays
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program to calculate the sum of all even numbers and sum of all odd
numbers, which are stored in an array of size 10. Take array values from the user.
 */
 
 #include<stdio.h>
 int main()
 {
 	int a[10], i, odd_sum = 0, even_sum = 0;
 	printf("Enter 10 Element:\n");
 	for(i = 0; i < 10; i++)
 	{
 		scanf("%d", &a[i]);
 		
	 }
	 for(i = 0; i < 10; i++)
	 {
	 	if(a[i] % 2 == 0)
	 		even_sum = even_sum + a[i];
		 else
		 odd_sum = odd_sum + a[i];
	 }
	 printf("Sum all even number = %d\n", even_sum);
	 printf("Sum all odd number = %d", odd_sum);
 	return 0;
 }
