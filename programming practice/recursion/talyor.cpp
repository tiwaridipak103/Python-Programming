#include <stdio.h>

double  p ,f;
int power(int m , int n)
{
    if (n == 0)
    {
        return 1;
    }

    return power(m , n-1) * m; 
}

int fact(int z)
{
    if (z == 0)
    {
        return 1;
    }
    return fact(z-1) * z; 
}



double talyor(int x, int n)
{
    
    if (n == 0)
    {
        return 1;
    }

    p = power(x, n);
    f = fact(n);

    return talyor(x, n-1) + (p / f);

}


int main()
{
    
    double r;
    r = talyor(2,10);
    printf("%f\n ",r);
    return 0;
}

