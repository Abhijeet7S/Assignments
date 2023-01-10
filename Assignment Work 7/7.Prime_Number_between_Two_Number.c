/*
 * Assignment - 7
 * Question - 7
 * @topic - Level up with loops
 * @author - Abhijeet Kumar Singh
 */
 
 // Write a program to print all Prime numbers between two given numbers


 #include<stdio.h>
 int main()
 {
 	int i, j, num_1, num_2, flag = 0;
 	printf("Enter Two Number\n");
 	scanf("%d %d", &num_1, &num_2);
 	for(i = num_1; i <= num_2; i++)
 	{
 		for(j = 2; j <= (i - 1); j++)
 		{
 			if(i % j == 0)
 			{
 				flag = 1;
			 }
		 }
		 if(flag == 0)
		 printf("%d\t", i);
		 else
		 flag = 0;
	 }
 	return 0;
 }

