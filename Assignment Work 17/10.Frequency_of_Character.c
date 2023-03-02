/*
 * Assignment - 17	
 * Question - 9
 * @topic - String Basics
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program in C to Find the Frequency of Characters
 */
 
 #include<stdio.h>
 int main()
 {
 	char a[100], c;
    int count = 0, i;
 	printf("Enter String :\n");
 	scanf("%[^\n]s", a);
 	for(c = 'a'; c <= 'z'; c++)
 	{
 		count = 0;
 		for(i = 0; a[i] != '\0'; i++)
 		{
 			if(c == a[i])
 			count++;
		 }
		 if(count > 0)
		 printf("%c Fount in %d Times\n", c, count);
	 }

 	return 0;
 }
