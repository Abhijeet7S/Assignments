/*
 * Assignment - 14
 * Question - 9
 * @topic - Arrays
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program in C to read n number of values in an array and display it in reverse
order. Take array values from the user.
 */
 
 #include<stdio.h>
 int main()
 {
 	int n, a[n], i;
 	printf("Enter Value of N:\n");
 	scanf("%d", &n);
 	printf("Enter %d Element:\n", n);
 	for(i = 0; i < n; i++)
 	scanf("%d", &a[i]);
 	printf("Reverse Order of Array:\n");
 	i = n-1;
 	while(i >= 0 )
 	{
 		printf("%d ", a[i]);
 		i--;
	 }
 
 	return 0;
 }
