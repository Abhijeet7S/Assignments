/*10. WAP to take date as an input in below given format and convert the date format and
display the result as given below.
User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
*/

#include<stdio.h>
int main()
{
    int date,months,year;
    printf("Enter Date, Months and Year\n");
    scanf("%d/%d/%d",&date ,&months ,&year);
    printf("Day - %d ,Months - %d , Year - %d",date,months,year);
    return 0;
}
