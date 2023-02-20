/*
 * Assignment - 14
 * Question - 7
 * @topic - Arrays
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program to find second largest in an array.Take array values from the user.
 */
 
 #include<stdio.h>
 int main()
 {
 	int a[10], i, j, temp;
 	printf("Enter 10 Element:\n");
 	for(i = 0; i < 10; i++)
 	scanf("%d", &a[i]);
 	for(i = 0; i < 9; i++)
 	{
 		for(j = i+1; j < 10; j++)
 		{
 			if(a[i] < a[j])
 			{
 				temp = a[i];
 				a[i] = a[j];
 				a[j] = temp;
			 }
		 }
	 }
	 printf("Second Largest Number = %d", a[1]);
 	return 0;
 }
