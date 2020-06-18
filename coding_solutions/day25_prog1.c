#include <stdio.h>

int main()
{
    int unit;
    float amt, total_amt;
    printf("Enter total units consumed: ");
    scanf("%d", &unit);
    if(unit <= 100)
    {
        amt = unit * 10;
    }
    else if(unit <= 200)
    {
        amt = 1000 + ((unit-100) * 15);
    }
    else if(unit <= 300)
    {
        amt = 2500 + ((unit-200) * 20);
    }
    else
    {
        amt = 4500 + ((unit-300) * 25);
    }
    total_amt  = amt;

    printf("Electricity Bill = Rs. %d", total_amt);

    return 0;
}