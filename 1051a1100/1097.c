#include <stdio.h>
 
int main()
{
    for(int i = 0; i <= 4; i++)
    {
        printf("I=%d J=%d\nI=%d J=%d\nI=%d J=%d\n", 1+2*i, 7+2*i, 1+2*i, 6+2*i, 1+2*i, 5+2*i);
    }
    return 0;
}