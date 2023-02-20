/*
 * Assignment - 15	
 * Question - 8
 * @topic - Arrays and Functions
 * @author - Abhijeet Kumar Singh
 */
 
 /*
 Write a function in C to print all unique elements in an array.
 */ 
 
 #include<stdio.h>
 void uniqueElement(int a[], int size)
 {
 	int i, j, k, count;
 	for(i = 0; i < size; i++)
 	{
 		count = 0;
 		for(j = 0; j < i; j++)
 		{
 			if(a[i] == a[j])
 			count++;
		 }
		 for(k = i + 1; k < size; k++)
		 {
		 	if(a[i] == a[k])
		 	count++;
		 }
		 
		 if(count == 0)
		 printf("%d ", a[i]);
	 }
	 
 }
 int main()
 {
 	int a[9] = { 2, 3, 5, 2, 7, 5, 8, 1, 7};
 	uniqueElement(a, 9);
 	return 0;
 }
