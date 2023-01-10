/*
 * Assignment - 8
 * Question - 1
 * @topic - Star Pattern Problems
 * @author - Abhijeet Kumar Singh
 */
 
 
 #include<stdio.h>
 int main()
 {
 	int c, r;
 	for(r = 0; r < 5; r++)
 	{
 		for(c = 0; c <= r; c++)
 		{
 			printf("*\t");
		 }
		 printf("\n\n");
	 }
 	
 	return 0;
 }
