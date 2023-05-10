#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
	int num;
	int dem;
}
fracao;

fracao *criar();
fracao *smr(fracao *, fracao *);
fracao *sbtrr(fracao *, fracao *);
fracao *prdt(fracao *, fracao *);
fracao *dvs(fracao *, fracao *);
fracao *min(fracao *);
int mdc(int, int);

int main()
{
	int n, num1, dem1, num2, dem2;
	fracao *f1 = criar();
	fracao *f2 = criar();
	char op;
	int lixo = scanf(" %d", &n);
	for (int i = 0; i < n; i++)
	{
		lixo = scanf(" %d %*c %d %c %d %*c %d", &f1->num, &f1->dem, &op, &f2->num, &f2->dem);
		fracao *r;
		switch (op)
		{
		case '+':
			r = smr(f1, f2);
			break;
		case '-':
			r = sbtrr(f1, f2);
			break;
		case '*':
			r = prdt(f1, f2);
			break;
		case '/':
			r = dvs(f1, f2);
			break;
		}
		fracao *rmin = min(r);
		printf("%d/%d = %d/%d\n", r->num, r->dem, rmin->num, rmin->dem);
	}
	return 0;
}

fracao *smr(fracao *f1, fracao *f2)
{
	fracao *r = criar();
	int demc = f1->dem * f2->dem;
	r->num = f1->num * demc / f1->dem + f2->num * demc / f2->dem;
	r->dem = demc;
	return r;
}

fracao *sbtrr(fracao *f1, fracao *f2)
{
	fracao *r = criar();
	int demc = f1->dem * f2->dem;
	r->num = f1->num * demc / f1->dem - f2->num * demc / f2->dem;
	r->dem = demc;
	return r;
}

fracao *prdt(fracao *f1, fracao *f2)
{
	fracao *r = criar();
	r->num = f1->num * f2->num;
	r->dem = f1->dem * f2->dem;
	return r;
}

fracao *dvs(fracao *f1, fracao *f2)
{
	fracao *r = criar();
	r->num = f1->num * f2->dem;
	r->dem = f1->dem * f2->num;
	return r;
}

fracao *min(fracao *f)
{
	fracao *r = criar();
	int d = abs(mdc(f->num, f->dem));
	r->num = f->num / d;
	r->dem = f->dem / d;
	return r;
}

int mdc(int a, int b)
{
	if(a == 0)
		return b;
	int r = b % a;
	b = a;
	a = r;
	return mdc(a, b);
}

fracao *criar()
{
	fracao *f = malloc(sizeof(fracao));
	return f;
}