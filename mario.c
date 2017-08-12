#include <stdio.h>
#include <cs50.h>

int mario(int height);

int main(void)
{
    printf("Height :");
    int height = get_int();
    if(height>23 || height <0)
    {
        printf("Please enter a positive integer uptil 23");
    }
    else
    {
        mario(height);
    }
}

int mario(int height)
{
    char ch = '*';
    int spaces = height - 1;
    for(int i=1; i<=height; i++)
    {
        for(int j=spaces; j>=1; j--)
        {
            printf("  ");
        }
        for(int k=0; k<=i; k++)
        {
            printf("%2c", ch);
        }
        printf("\n");
        spaces--;
    }
    return 0;
}