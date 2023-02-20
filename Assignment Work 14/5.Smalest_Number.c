/*
 * Assignment - 14
 * Question - 5
 * @topic - Arrays
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program to find the smallest number stored in an array of size 10. Take array
values from the user.
 */
 
 #include<stdio.h>
 int main()
 {
 	int a[10], i, min;
 	printf("Enter 10 Element:\n");
 	for(i = 0; i < 10; i++)
 	scanf("%d", &a[i]);
 	min = a[0];
 	for(i = 1; i < 10; i++)
 	{
 		if(min > a[i])
 		min = a[i];
	 }
	 printf("Smallest Number = %d", min);
 	return 0;
 }
