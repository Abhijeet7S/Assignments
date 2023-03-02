/*
 * Assignment - 17	
 * Question - 3
 * @topic - String Basics
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program to count vowels in a given string
 */
 
 #include<stdio.h>
 int main()
 {
 	char a[] = "abhijeet";
 	int i, count = 0;
 	for(i = 0; a[i] != '\0'; i++)
 	{
 		if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
 		count++;
	 }
	 printf("Total number of Vowel = %d", count);
 	return 0;
 	
 }
