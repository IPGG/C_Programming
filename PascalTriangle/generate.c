#include <stdio.h>

int main()
{
    short unsigned int n;
    scanf("%hd", &n);
    unsigned int last[n + 1], current[n + 1];
    last[0] = 1;
    printf("%d\n",last[0]);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i) current[j] = 1;
            else current[j] = last[j] + last[j - 1];
            printf("%d ", current[j]);
        }
        for (int j = 0; j <= i; j ++)
            last[j] = current[j];
        printf("\n");
    }
    return 0;
}