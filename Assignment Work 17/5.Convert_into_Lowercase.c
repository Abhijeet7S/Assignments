/*
 * Assignment - 17	
 * Question - 5
 * @topic - String Basics
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a program to convert a given string into lowercase
 */
 
 #include<stdio.h>
 int main()
 {
 	char a[100];
 	int i;
 	printf("Enter your String:\n");
 	scanf("%[^\n]s", a);
 	
 	//scanf("%[^\n]%*c", a);
 	
 	//fgets(a, 100, stdin);
 	
 	for(i = 0; a[i] != '\0'; i++)
 	{
 		if(a[i] >= 'A' && a[i] <= 'Z')
 		{
 			a[i] = a[i] + 32;
		 }

	 }
	 printf("%s",a);
 	return 0;
 }
