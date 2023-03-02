/*
 * Assignment - 17	
 * Question - 6
 * @topic - String Basics
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program to reverse a string.
 */
 
 #include<stdio.h>
 int main()
 {
 	char a[100];
 	int i, count = 0;
 	printf("Enter String:\n");
 	scanf("%[^\n]%*c", a);
 	for(i = 0; a[i] != '\0'; i++)
 	{
 		count++;
	 }
	for(i = count - 1; i >= 0; i--)
	{
		printf("%c", a[i]);
	}
 	return 0;
 }
