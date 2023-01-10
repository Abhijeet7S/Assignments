/*
 * Assignment - 9
 * Question - 4
 * @topic - switch case control
 * @author - Abhijeet Kumar Singh
 */
 
 /* Write a menu driven program with the following options:
a. Check whether a given set of three numbers are lengths of an isosceles
triangle or not
b. Check whether a given set of three numbers are lengths of sides of a right
angled triangle or not
c. Check whether a given set of three numbers are equilateral triangle or not
d. Exit
*/

#include<stdio.h>
int main()
{
	int ch, a, b, c;
	while(1)
	{
			printf("Select Your Choice\n");

	printf("1. Isosceles Triangle\n2. Right angle Triangle\n3. Equilateral Triangle\n4. Exit\n");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:
			printf("Enter All Three Side \n");
			scanf("%d %d %d", &a, &b, &c);
			if((a == b) || (b == c) || (c == a))
			printf("Yes, It is An isosceles Triangle\n");
			else
			printf("No, It is not an Isosceles Triangle\n");
			break;
			case 2:
				printf("Enter Length Of All Three Sides\n");
				scanf("%d %d %d", &a, &b, &c);
				if((a*a + b*b == c*c) || (b*b + c*c == a*a) || (c*c + a*a == b*b))
				printf("Right Angle Triangle\n");
				else
				printf("Not Right Angle Triangle\n");
				break;
				case 3:
					printf("Enter Length Of All Three Sides\n");
			    	scanf("%d %d %d", &a, &b, &c);
			    	if((a ==b) && (b == c))
			    	printf("Equilateral Triangle\n");
			    	else
			    	printf("Not Equilateral Triangle\n");
					break;
					case 4:
						return 0;
						break;
	}
	}

	
	return 0;
}
