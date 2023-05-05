#include <stdio.h>
 
int main()
{
    for(int i = 0; i <= 20; i += 2)
    {
		if(i % 10 == 0)
			printf("I=%d J=%d\nI=%d J=%d\nI=%d J=%d\n", (i/10), 1+(i/10), (i/10), 2+(i/10), (i/10), 3+(i/10));
		else
			printf("I=%.1f J=%.1f\nI=%.1f J=%.1f\nI=%.1f J=%.1f\n",
					(i/10.0), 1+(i/10.0), (i/10.0), 2+(i/10.0), (i/10.0), 3+(i/10.0));
    }
    return 0;
}