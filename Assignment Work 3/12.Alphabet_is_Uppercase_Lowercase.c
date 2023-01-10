/*
 * Assignment - 3
 * Question - 12
 * @topic - Decision Control Statement
 * @author - Abhijeet Kumar Singh
 */

 //Write a program to check whether a given alphabet is in uppercase or lowercase.

 #include<stdio.h>
 int main()
 {
 	char ch;
 	printf("Enter a charecter\n");
 	scanf("%c", &ch);
 	if((ch > 64) && (ch<91))
 	printf("%c is Uppercase", ch);
 	else if((ch > 96) && (ch < 123))
 	printf("%c is Lowercase", ch);
 	else
 	printf("Invalid Character");
 	return 0;
 }
