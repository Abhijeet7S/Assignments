/*
 * Assignment - 8
 * Question - 12
 * @topic - Star Pattern Problems
 * @author - Abhijeet Kumar Singh
 */
 
 #include<stdio.h>
 int main()
 {
 	int c, r;
 	for(r = 0; r < 4; r++)
 	{
 		char a = 'A';
 		for(c = 0; c < 7; c++)
 		{
 			if((c >= r) && (c <= 6-r))
 			{
 				printf("%c", a);
 				if(c < 3)
 				a++;
 				else
 				a--;
			 }
			 else
			 printf(" ");
		 }
		 printf("\n");
	 }
 	return 0;
 }
