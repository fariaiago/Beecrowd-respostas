#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[100], b[100], c[100], tmpA[11], tmpB[11], tmpC[11], lx[101];
	strcpy(lx, fgets(a, 100, stdin));
	strcpy(lx, fgets(b, 100, stdin));
	strcpy(lx, fgets(c, 100, stdin));
	a[strcspn(a, "\n")] = 0;
	b[strcspn(b, "\n")] = 0;
	c[strcspn(c, "\n")] = 0;
	strncpy(tmpA, a, 10);
	strncpy(tmpB, b, 10);
	strncpy(tmpC, c, 10);
	tmpA[10] = 0;
	tmpB[10] = 0;
	tmpC[10] = 0;
	printf("%s%s%s\n%s%s%s\n%s%s%s\n%s%s%s\n", a, b, c, b, c, a, c, a, b, tmpA, tmpB, tmpC);
	return 0;
}