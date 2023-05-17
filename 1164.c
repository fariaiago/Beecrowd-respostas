#include <stdio.h>

int main()
{
    int t;
    scanf(" %d", &t);
    for(int i = 0; i < t; i++)
    {
        int n, s = 0;
        scanf(" %d", &n);
        for(int i = 1; i < n; i++)
            if(n % i == 0)
                s += i;
        printf("%d %seh perfeito\n", n, n == s ? "" : "nao ");
    }
    return 0;
}