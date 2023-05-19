#include <stdio.h>
 
int main()
{
    for(int i = 0; i <= 4; i++)
    {
        printf("I=%d J=7\nI=%d J=6\nI=%d J=5\n", 1+2*i, 1+2*i, 1+2*i);
    }
    return 0;
}