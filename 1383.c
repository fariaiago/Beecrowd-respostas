#include <stdio.h>
#include <stdbool.h>

#define LINE 9
#define SIZE LINE * LINE

bool is_ln_cl_valid(int num[9][9], int pos, bool cl)
{
	int vls[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	for (int i = 0; i < LINE; i++)
		if(cl)
			vls[num[pos][i] - 1] += 1;
		else
			vls[num[i][pos] - 1] += 1;
	for (int i = 0; i < LINE; i++)
	{
		if(vls[i] != 1)
			return false;
	}
	return true;
}

bool is_sector_valid(int num[9])
{
	int vls[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
	for (int i = 0; i < LINE; i++)
	{
		vls[num[i] - 1] += 1;
	}
	for (int i = 0; i < LINE; i++)
	{
		if(vls[i] != 1)
			return false;
	}
	return true;
}

int main(void)
{
	int n;
	int lx = scanf(" %d", &n);
	for (int i = 0; i < n; i++)
	{
		printf("Instancia %d\n", i + 1);
		bool invalid = false;
		int num[9][9];
		for (int j = 0; j < LINE; j++)
			for (int k = 0; k < LINE; k++)
				lx = scanf(" %d ", &num[j][k]);
		for (int j = 0; j < LINE; j++)
			if(!is_ln_cl_valid(num, j, true))
				invalid = true;
		for (int j = 0; j < LINE; j++)
			if(!is_ln_cl_valid(num, j, false))
				invalid = true;
		for (int j = 0; j < LINE; j += 3)
			for (int k = 0; k < LINE; k += 3)
				if(!is_sector_valid((int[]){num[j+0][k+0], num[j+0][k+1], num[j+0][k+2],
						num[j+1][k+0], num[j+1][k+1], num[j+1][k+2], num[j+2][k+0], num[j+2][k+1], num[j+2][k+2]}))
					invalid = true;
		if(invalid)
			puts("NAO");
		else
			puts("SIM");
		puts("");
	}
	return 0;
}