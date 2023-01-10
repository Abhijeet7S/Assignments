/*
 * Assignment - 9
 * Question - 1
 * @topic - switch case control
 * @author - Abhijeet Kumar Singh
 */
 
 /* Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c;
	char ch;
	while(1)
	{
	printf("Select Your Choice\n\na. Addition\nb. Subtraction\nc. Multiplication\nd. Division\ne. EXit\n");
	fflush(stdin);
	scanf("%c", &ch);
    fflush(stdin);

	
	switch(ch)
	{
		case 'a':
			printf("Enter Two Number\n");
	        scanf("%d %d", &a, &b);
			c = a + b;
			printf("Sum of %d and %d = %d\n\n", a, b, c);
			break;
			case 'b':
				printf("Enter Two Number\n");
	            scanf("%d %d", &a, &b);
		    	c = a - b;
		    	printf("Subtraction of %d and %d = %d\n\n", a, b, c);
				break;
				case 'c':
					printf("Enter Two Number\n");
	                scanf("%d %d", &a, &b);
		        	c = a * b;
		        	printf("Multiplication of %d and %d = %d\n\n", a, b, c);
					break;
					case 'd':
						printf("Enter Two Number\n");
	                    scanf("%d %d", &a, &b);
		            	c = a / b;
		            	printf("Division of %d and %d = %d\n\n", a, b, c);
						break;
						case 'e':
							return 0;
							break;			
	}
	}

	

	return 0;
}
