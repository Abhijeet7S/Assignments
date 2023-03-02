/*
 * Assignment - 17	
 * Question - 2
 * @topic - String Basics
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program to count the occurrence of a given character in a given string.
 */
 
 #include<stdio.h>
 int main()
 {
 	char a[] = "Abhijeet";
 	char key;
 	printf("Enter the Character:\n");
 	scanf("%c", &key);
 	int i, count = 0;
 	for(i = 0; a[i] != '\0'; i++)
 	{
 		if(a[i] == key)
 		count++;
	 }
	 printf("Total occurrence of %c = %d", key, count);
 	return 0;
 }
