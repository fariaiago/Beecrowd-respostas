#include <stdio.h>
 
int main()
{
    int n, s = 0, b = 0, a = 0, s1 = 0, b1 = 0, a1 = 0;
    scanf(" %d", &n);
    for(int i = 0; i < n; i++)
    {
        int t1, t2, t3, t4, t5, t6;
        scanf(" %*s %d %d %d %d %d %d", &t1, &t2, &t3, &t4, &t5, &t6);
        s += t1;
        b += t2;
        a += t3;
        s1 += t4;
        b1 += t5;
        a1 += t6;
    }
    printf("Pontos de Saque: %.2f %%.\nPontos de Bloqueio: %.2f %%.\nPontos de Ataque: %.2f %%.\n",
            s1 * 100.0 / s, b1 * 100.0 / b, a1 * 100.0 / a);
    return 0;
}