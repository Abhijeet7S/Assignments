/*
 * Assignment - 7
 * Question - 6
 * @topic - Level up with loops
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a program to print all Prime numbers under 100
 
 #include<stdio.h>
 int main()
 {
 	int i, j, flag = 0;
 	for(i = 2; i <= 100; i++)
 	{
 		for(j =2; j <= i -1; j++)
 		{
 			if(i % j ==0)
 			{
 				flag++;
			 }
 			
		 }
		 if(flag == 0)
		 printf("%d\t",i);
		 else
		 flag = 0;
	 }
 	return 0;
 }
