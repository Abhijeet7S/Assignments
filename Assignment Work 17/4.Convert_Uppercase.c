/*
 * Assignment - 17	
 * Question - 4
 * @topic - String Basics
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program to convert a given string into uppercase
 */
 
 #include<stdio.h>
 int main()
 {
 	int i;
 	char a[20];
 	printf("Enter the string:\n");
 	fgets(a, 20, stdin);
 
 	for(i = 0; a[i] != '\0'; i++)
 	{
 		if(a[i] >= 'a' && a[i] <= 'z')
 		{
 			a[i] = a[i] - 32;
		 }

	 }
	 printf("%s",a);
 	return 0;
 }
