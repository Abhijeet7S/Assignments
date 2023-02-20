/*
 * Assignment - 15	
 * Question - 3
 * @topic - Arrays and Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a function to sort an array of any size. (TSRN)
 */
 
 #include<stdio.h>
 void sort(int a[], int);
 int main()
 {
 	int a[7] = {5, 3, 9, 1, 7, 2, 8};
 	sort(a, 7);
 	return 0;
 }
 
 void sort(int a[], int size)
 {
 	int i, j, temp;
 	for(i = 0; i < size - 1; i++)
 	{
 		for(j = i + 1; j < size; j++)
 		{
 			if(a[i] > a[j])
 			{
 				temp = a[i];
 				a[i] = a[j];
 				a[j] = temp;
			 }
		 }
	 }
	 
	 for(i = 0; i < size; i++)
	 printf("%d ", a[i]);
 }
