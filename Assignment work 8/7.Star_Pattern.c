/*
 * Assignment - 8
 * Question - 7
 * @topic - Star Pattern Problems
 * @author - Abhijeet Kumar Singh
 */
 
 #include<stdio.h>
 int main()
 {
 	int c, r;
 	for(r = 0; r < 5; r++)
 	{
 		for(c = 0; c < 10; c++)
 		{
 			if((c <= 4-r) || (c >= 5+r))
 			printf("*");
 			else
 			printf(" ");
		 }
		 printf("\n\n");
	 }
 	return 0;
 }
