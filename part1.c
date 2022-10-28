#include <stdio.h>
int main()
{
    int array[30] = {0};
    int userinput, sno;
    printf("Type 1 for first class: ");
    scanf("%d", &userinput);
    if (userinput == 1)
    {
        printf("Select seat number(1-30):    ");
        for (int i = 0; i < 30; i++)
        {
            scanf("%d", &array[i]);
            if (array[i] <= 30)
            {
                printf("Your seat in first class\n");
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
    else
    {
        printf("Error!inavalid input\n");
    }
    return 0;
}