#include <stdio.h>
#include <stdlib.h>

int fitsBits(int x, int n)
{
    int s = (x >> 31);                       	     // return -1: x < 0; 0: x >= 0;
    int mone = ~0;                                   // -1
    int absx = ((x & ~s) | ((~x + 1) & s));          // return x: x >= 0; -x: x < 0;
    int res = !((absx + (mone & s)) >> (n + mone));  // return ans;
    return res;
}

int main()
{
    int x, n;
    scanf("%d %d", &x, &n);
    printf("%d", fitsBits(x, n));
    return 0;
}
