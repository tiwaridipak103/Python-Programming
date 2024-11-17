#include <stdio.h>

int a =1, b = 1 , c = 1;
int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return fact(n-1)*n;
}

int comb(int y , int z)
{
    a = fact(y);
    b = fact(z);
    c = fact(y - z);

    return (a/(b*c));

}

int main()
{
    int r;
    r = comb(5 , 2);
    printf("%d ", r);
    return 0;
}
