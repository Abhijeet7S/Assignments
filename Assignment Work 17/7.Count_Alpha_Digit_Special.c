/*
 * Assignment - 17	
 * Question - 7
 * @topic - String Basics
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program in C to count the total number of alphabets, digits and special
characters in a string
 */
 
 #include<stdio.h>
 int main()
 {
 	char a[100];
 	int alphaCount = 0, digitCount = 0, specialCount = 0;
 	int i = 0;
 	printf("Enter your String in small letter :\n");
 	scanf("%[^\n]%*c", a);
 	
 	while(a[i] != '\0')
 	{
 		if(a[i] >= 'a' && a[i] <= 'z')
 		alphaCount++;
 		else if(a[i] >= '0' && a[i] <= '9')
 		digitCount++;
 		else
 		specialCount++;
 		
 		i++;
	 }
	 
	 printf("Total Alphabets = %d\nTotal Digits = %d\nTotal Special Characters = %d", alphaCount, digitCount, specialCount);
 	
 	return 0;
 }
