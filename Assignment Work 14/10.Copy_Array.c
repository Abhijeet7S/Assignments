/*
 * Assignment - 14
 * Question - 10
 * @topic - Arrays
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program in C to copy the elements of one array into another array.Take array
values from the user
 */
 
 
 #include<stdio.h>
 int main()
 {
 	int n, a[100], i, s[100];
 	printf("Enter the length of element:\n");
 	scanf("%d", &n);
 	printf("\nEnter %d element:\n", n);
 	for(i = 0; i < n; i++)
 	scanf("%d", &a[i]);
 	i = 0;
 	while(i < n)
 	{
 		s[i] = a[i];
 		i++;
	 }
	 
	 for(i = 0; i < n; i++)
	 printf("%d ", s[i]);
 	
 	return 0;
 }
