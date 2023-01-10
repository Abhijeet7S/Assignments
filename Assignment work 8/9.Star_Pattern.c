/*
 * Assignment - 8
 * Question - 9
 * @topic - Star Pattern Problems
 * @author - Abhijeet Kumar Singh
 */
 
 #include<stdio.h>
 int main()
 {
 	int c, r;
 	for(r = 0; r < 4; r++)
 	{
 		int k = 1;
 		for(c = 0; c < 7; c++)
 		{
 			if((c >= r) && (c <= 6-r))
 			{
 				printf("%d", k);
 				if(c < 3)
 				k++;
 				else
 				k--;
			 }
			 else
			 printf(" ");
		 }
		 printf("\n");
	 }
 	return 0;
 }
