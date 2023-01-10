/*
 * Assignment - 8
 * Question - 10
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
 			if((c <= 3-r) || (c >= 3+r))
 			{
 				printf("%d",k);
 			    c < 3 ? k++ : k--;
			 }
			 else
			 {
			 		 printf(" ");
			 		 if( c == 3)
			 		 k--;
			 }
		
		 }
		 printf("\n");
	 }
 	return 0;
 }
