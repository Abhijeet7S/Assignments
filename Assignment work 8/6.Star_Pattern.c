/*
 * Assignment - 8
 * Question - 6
 * @topic - Star Pattern Problems
 * @author - Abhijeet Kumar Singh
 */
 
 #include<stdio.h>
 int main()
 {
 	int c, r;
 	for(r = 0; r < 5; r++)
 	{
 		for(c = 0; c < 9; c++)
 		{
 			if((c >= r) && (c <= 8-r))
 			printf("*");
 			else
 			printf(" ");
		 }
		 printf("\n\n");
	 }
 	return 0;
 }
