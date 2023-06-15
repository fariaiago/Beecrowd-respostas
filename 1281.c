#include <stdio.h>

struct str_key
{
	int key_hashed;
	int index;
};


struct str_to_int_map
{
	struct str_key keys[10];
	
	int size;
};

int main(void)
{
	int n;
	scanf(" %d", &n);
	for (int i = 0; i < n; i++)
	{
		int m, p;
		scanf(" %d", m);
		for (int i = 0; i < n; i++)
		{
			/* code */
		}
		scanf(" %d", p);
		for (int i = 0; i < n; i++)
		{
			/* code */
		}
	}
	
	return 0;
}