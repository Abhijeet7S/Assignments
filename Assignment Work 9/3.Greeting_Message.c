/*
 * Assignment - 9
 * Question - 3
 * @topic - switch case control
 * @author - Abhijeet Kumar Singh
 */
 
 /* Write a program which takes the day number of a week and displays a unique
greeting message for the day.
*/
#include<stdio.h>
int main()
{
	int n;
	printf("Enter day number\n");
	scanf("%d", &n);
	switch(n)
	{
		case 1:
			printf("Monday\n");
			break;
			case 2:
				printf("Tuesday\n");
				break;
				case 3:
					printf("Wednesday\n");
					break;
					case 4:
						printf("Thursday\n");
						break;
						case 5:
							printf("Friday\n");
							break;
							case 6:
								printf("Saturday\n");
								break;
								case 7:
									printf("Sunday\n");
									break;
									default:
										printf("Invalid Day Number\n");
										break;
	}
	return 0;
	
}
