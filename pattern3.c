/*Pattern:
0
1 -1
2 -2 2
3 -3 3 -3
4 -4 4 -4 4
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
            if((col % 2) == 0)
            {
                printf("%d ", row);
            }
            else
            {
                printf("-%d ", row);
            }
        }
        printf("\n");
    }

    return 0;
}

