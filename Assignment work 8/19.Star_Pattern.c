/*
 * Assignment - 8
 * Question - 19
 * @topic - Star Pattern Problems
 * @author - Abhijeet Kumar Singh
 */
 
 #include<stdio.h>
 int main()
 {
 	int c, r;
 	for(r = 0; r < 3; r++)
 	{
 		for(c = 0; c < 19; c++)
 		{
 			if((c >= 2-r && c <= 6+r) || (c >= 12-r && c <= 16+r))
 			printf("*");
 			else
 			printf(" ");
		 }
		 printf("\n");
	 }
	 for(r = 3; r < 13; r++)
	 {
	 	for(c = 0; c < 19; c++)
	 	{
	 		if((c >= r-3) && (c <= 21-r))
	 		printf("*");
	 		else
	 		printf(" ");
		 }
		 printf("\n");
	 }
 	return 0;
 }
