#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);

    if (n > 0)
        for (int i = n; i >= -n; i--)
            printf("%d ", i);

    else
        for (int i = n; i <= abs(n); i++)
            printf("%d ", i);

    return 0;
}