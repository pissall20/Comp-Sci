#include <stdio.h>
#include <cs50.h>

int greedy(float change);

int main(void)
{
    printf("Your change is: ");
    float change = get_float();
    if(change<0)
    {
        printf("Wrong amount");
    }
    else
    {
        printf("Coins: %i\n", greedy(change));
    }
}

int greedy(float money)
{
    int change = money * 100;
    int count = 0;
    if(change >= 25)
    {
        do
        {
            change = change - 25;
            count++;
            
        }
        while(change >= 25);
    }
    if(change >= 10 && change < 25)
    {
        do
        {
            change -= 10;
            count++;
        }
        while(change >= 10 && change < 25);
    }
    if(change >= 5 && change < 10)
    {
        do
        {
            change -= 5;
            count++;
        }
        while(change >= 5 && change < 10);
    }
    if(change >= 1 && change <5)
    {
        do
        {
            change -= 1;
            count++;
        }
        while(change >=1 && change < 5);
    }
    return count;
}