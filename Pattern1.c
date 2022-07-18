/* Pattern:
1
3 5
7 9 11
13 15 17 19
21 23 25 27 29
*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    int num1 = 1;
    for(int row = 0;row < num; row++)
    {
        for(int col = 0;col <= row;col++)
        {
            printf("%d ", num1);
            num1 = num1 + 2; 
        }
        printf("\n");
    }

    return 0;
}
