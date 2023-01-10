/*
 * Assignment - 6
 * Question - 7
 * @topic - Use any loop
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a program to count digits in a given number
 
 #include<stdio.h>
 int main()
 {
 	int n, count = 0;
 	printf("Enter Number\n");
 	scanf("%d", &n);
 	while(n)
 	{
 		n = n / 10;
		 count++; 
	 }
	 printf("%d", count);
 	return 0;
 }
