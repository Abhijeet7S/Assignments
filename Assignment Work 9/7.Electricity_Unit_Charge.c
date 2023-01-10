/*
 * Assignment - 9
 * Question - 7
 * @topic - switch case control
 * @author - Abhijeet Kumar Singh
 */
 
 /* Program to take the value from the user as input electricity unit charges and calculate
total electricity bill according to the given condition . Using the switch statement.
For the first 50 units Rs. 0.50/unit
For the next 100 units Rs. 0.75/unit
For the next 100 units Rs. 1.20/unit
For units above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill
*/

#include<stdio.h>
int main()
{
	int unit;
	float amt = 0, t_amt = 0, surcharge = 0;
	printf("Enter Your Unit\n");
	scanf("%d", &unit);
	switch(unit <= 50)
	{
		case 0:
			switch(unit <= 150)
			{
				case 0:
					switch(unit <= 250)
					{
						case 0:
							amt = 220 + (unit - 250) * 1.50;
							break;
							case 1:
								amt = 100 + (unit -150) * 1.20;
								break;
					}
					break;
					case 1:
						amt = 25 + (unit -50) * 0.75;
						break;
			}
			break;
			case 1:
				amt = unit * 0.50;
				break;
	}
	surcharge = amt * 0.20;
	t_amt = amt + surcharge;
	printf("Total Amount = %.2f", t_amt);
	return 0;
}
