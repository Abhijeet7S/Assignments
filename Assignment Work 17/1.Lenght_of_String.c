/*
 * Assignment - 17	
 * Question - 1
 * @topic - String Basics
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program to calculate the length of the string. (without using builtin method)
 */
 
 #include<stdio.h>
 int main()
 {
 	char a[] = "Abhijeet";
 	int i, count = 0;
 	for(i = 0; a[i] != '\0'; i++)
 	count++;
 	printf("Length of String = %d", count);
 	return 0;
 }
