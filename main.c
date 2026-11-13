#include <stdio.h>
#include <stdlib.h>

int g_m = 9966990;
int g_x = 0;
int g_ans = 0;

void calc_gcd(void)
{
    int r;
    int a = g_m;
    int b = g_x;
    for (; b != 0;)
    {
        r = a % b;
        a = b;
        b = r;
    }
    g_ans = abs(a);
}

int main(void)
{
    scanf("%d", &g_x);
    if (g_x > g_m)
    {
        printf("NG");
        return 0;
    }
    calc_gcd();
    printf("%d", g_ans);
    return 0;
}
