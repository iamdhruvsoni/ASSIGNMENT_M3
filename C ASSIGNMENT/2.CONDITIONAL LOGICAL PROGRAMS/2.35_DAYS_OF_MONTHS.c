#include <stdio.h>

int main()
{
    int month;

   
    printf("Enter month number (1-12): ");
    scanf("%d", &month);


    if(month == 1)
    {
        printf("\n\n\t 31 days");
    }
    else if(month == 2)
    {
        printf("\n\n\t 28 or 29 days");
    }
    else if(month == 3)
    {
        printf("\n\n\t 31 days");
    }
    else if(month == 4)
    {
        printf("\n\n\t 30 days");
    }
    else if(month == 5)
    {
        printf("\n\n\t 31 days");
    }
    else if(month == 6)
    {
        printf("\n\n\t 30 days");
    }
    else if(month == 7)
    {
        printf("\n\n\t 31 days");
    }
    else if(month == 8)
    {
        printf("\n\n\t 31 days");
    }
    else if(month == 9)
    {
        printf("\n\n\t 30 days");
    }
    else if(month == 10)
    {
        printf("\n\n\t 31 days");
    }
    else if(month == 11)
    {
        printf("\n\n\t 30 days");
    }
    else if(month == 12)
    {
        printf("\n\n\t 31 days");
    }
    else
    {
        printf("\n\n\t Invalid input!...");
    }

  
}
