/*
 * Assignment - 17	
 * Question - 8
 * @topic - String Basics
 * @author - Abhijeet Kumar Singh
 */
 /*
 Write a program in C to copy one string to another string.
 */
 
 #include<stdio.h>
 int main()
 {
 	char a[] = "Abhijeet", b[10];
 	int i = 0;
 	while(a[i] != '\0')
 	{
 		b[i] = a[i];
 		i++;
	 }
	 b[i] = '\0';
	 printf("Copied String = %s", b);
 	
 	return 0;
 }
