/*
 * Assignment - 8
 * Question - 11
 * @topic - Star Pattern Problems
 * @author - Abhijeet Kumar Singh
 */
 
 #include<stdio.h>
 int main()
 {
 	int c, r;
 	for(r = 0; r < 5; r++)
 	{
 		char a = 'A';
 		for(c = 0; c < 9; c++)
 		{
 			if((c >=4-r) && (c <= 4+r))
 			{
 				printf("%c\t",a);
 				if(c < 4)
 				a++;
 				else
 				a--;
			 }
			 else
			 printf(" \t");
		 }
		 printf("\n");
	 }
 	return 0;
 }
