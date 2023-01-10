/*
 * Assignment - 8
 * Question - 18
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
 			if((c >= 4-r) && (c <= 4+r))
 			printf("*");
 			else
 			printf(" ");
		 }
		 printf("\n");
	 }
	// printf("\n");
	 for(r = 5; r < 9; r++)
	 {
	 	for(c = 0; c < 8; c++)
	 	{
	 		if((c >=r-4) && (c <= 12-r))
	 		{
	 			printf("*");
			 }
			 else
			 printf(" ");
		 }
		 printf("\n");
	 }
 	return 0;
 }
