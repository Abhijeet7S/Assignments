/*
 * Assignment - 8
 * Question - 14
 * @topic - Star Pattern Problems
 * @author - Abhijeet Kumar Singh
 */
 
 #include<stdio.h>
 int main()
 {
 	int c, r;
 	for(r = 0; r < 5; r++)
 	{
 		for(c = 0; c < 5; c++)
 		{
 			if((c == r) || (c == 0) || (r == 4))
 			printf("*");
 			else
 			printf(" ");
		 }
		 printf("\n\n");
	 }
 	return 0;
 }
 
