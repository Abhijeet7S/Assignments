/*
 * Assignment - 17	
 * Question - 9
 * @topic - String Basics
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a C program to sort a string array in ascending order.
 */
 
 #include<stdio.h>
 int main()
 {
 	char a[] = "abhijeet";
 	int i, j;
 	char temp;
 	for(i = 0; a[i] != '\0'; i++)
 	{
 		for(j = i + 1; a[j] != '\0'; j++)
 		{
 			if(a[i] > a[j])
 			{
 				temp = a[j];
 				a[j] = a[i];
 				a[i] = temp;
			 }
		 }
	 }
	 printf("%s", a);
 	return 0;
 }
