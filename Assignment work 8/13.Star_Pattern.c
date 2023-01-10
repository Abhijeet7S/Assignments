/*
 * Assignment - 8
 * Question - 13
 * @topic - Star Pattern Problems
 * @author - Abhijeet Kumar Singh
 */
 
 #include<stdio.h>
 int main()
 {
 	int c, r;
 	for(r = 0; r < 7; r++)
 	{
 		char k = 'A';
 		for(c = 0; c < 13; c++)
 		{
 			if((c <= 6-r) || (c >= 6+r))
 			{
 				printf("%c", k);
 				(c < 6) ? k++ : k--;
			 }
			 else
			 {
			 	printf(" ");
			 	if(c == 6)
			 	k--;
			 }
		 }
		 printf("\n");
	 }
 	return 0;
 }
 
