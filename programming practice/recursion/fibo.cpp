#include <stdio.h>

int a = 0, b = 1 , s = 0;


int fibo(int n)
{
    s = a + b;
    a = b;
    b = s;
    if (n == 0)
    {
        return b;
    }
    return fibo(n-1);
}

int main()
{
    int r;
    r = fibo(4);
    printf("%d ", r);
    return 0;
}

