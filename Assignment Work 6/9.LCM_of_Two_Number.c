/*
 * Assignment - 6
 * Question - 9
 * @topic - Use any loop
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a program to calculate LCM of two numbers
 
 #include<stdio.h>
 int main()
 {
 	int i, a, b;
 	printf("Enter a and b\n");
 	scanf("%d %d", &a, &b);
 	for(i = 1; i <= (a * b); i++)
 	{
 		if((i % a) == 0 && (i % b) == 0)
 		{
 			printf("LCM of %d and %d = %d", a, b, i);
 			break;
		 }
	 }
	 return 0;
 }
