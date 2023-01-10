/*
 * Assignment - 9
 * Question - 10
 * @topic - switch case control
 * @author - Abhijeet Kumar Singh
 */
 
 /* C program to find all roots of a quadratic equation using switch case
 */
 
 #include<stdio.h>
 int main()
 {
 	int a, b, c;
 	float d;
 	printf("Enter Three Number\n");
 	scanf("%d %d %d", &a, &b, &c);
 	d =b *b - 4 *a *c;
 	switch(d == 0)
 	{
 		case 0:
 			switch(d < 0)
 			{
 				case 0:
 					printf(" The equation has two real and distinct roots");
 					break;
 					case 1:
 						printf("The equation has two complex roots");
 						break;
			 }
 			break;
 			case 1:
 				printf("The equation has only one real root");
 				break;
	 }
 	return 0;
 }
