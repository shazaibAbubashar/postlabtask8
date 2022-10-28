#include <stdio.h>
int main()
{
    int array[130] = {0};
    int userinput;
    printf("Type 1 for first class:\n");
    printf("Type 2 for economy class:\n");
    scanf("%d", &userinput);
    if (userinput == 1)
    {
        printf("Enter your seat number between(1-30):   ");
        for (int i = 0; i < 30; i++)
        {
            scanf("%d", &array[i]);
            if (array[i] <= 30)
            {
                printf("Your seat in first class\n");
                printf("Your seat no is %d", array[i]);
                break;
            }
            else
            {
                printf("Error!Invalid input\n");
                break;
            }
        }
    }
    else if (userinput > 2)
    {
        printf("Error!Invalid input\n");
    }

    if (userinput == 2)
    {
        printf("Select seat number(31-100):    ");
        for (int i = 31; i < 100; i++)
        {
            scanf("%d", &array[i]);
            if (array[i] >= 31 && array[i] <= 100)
            {
                printf("Your seat in economy class\n");
                printf("Your seat no is: %d", array[i]);
                break;
            }
            else
            {
                printf("Error!Invalid input");
                break;
            }
        }
    }

    return 0;
}