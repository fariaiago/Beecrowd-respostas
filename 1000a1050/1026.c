#include <stdio.h>
#include <stdint.h>
 
int main()
{
    uint32_t a, b;
    while( scanf(" %u %u", &a, &b) == 2)
    {
        printf("%u\n", a^b);
    }
    return 0;
}