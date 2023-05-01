#include <stdio.h>


int main()
{
	int a, b, c;
	scanf(" %d %d %d", &a, &b, &c);
	int n1 = a, n2 = b, n3 = c;
	int temp;
	if(n2 < n1)
	{
		temp = n2;
		n2 = n1;
		n1 = temp;
	}

	if(n3 < n1)
	{
		temp = n3;
		n3 = n1;
		n1 = temp;
	}

	if(n3 < n2)
	{
		temp = n3;
		n3 = n2;
		n2 = temp;
	}
	printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", n1, n2, n3, a, b, c);
}