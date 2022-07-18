/* Pattern:
*
* *
* * *
* * * *
* * * * *
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    for(int row = 0;row < num; row++)
    {
        for(int col = 0;col <= row;col++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}

