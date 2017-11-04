#include<stdio.h>

int main()
{

    // int t, x, nth;
    // scanf("%d", &t);
    // scanf("%d %d", &x, &nth);
    printf("%d\n", fun(19));
    return 0;
    //Find smallest prime number greater than given n

}

int isPrime(int n)
{
    int i,j=0;
    for(i=1; i<=n; i++)
    {
        printf("%d %d\n", i, j);
        if(n%i == 0)
            j++;
    }
    if(j == 2)
        return 1;
    else if(j > 2)
        return 0;
}

int fun(unsigned int n)
{
    int i=n+1;
    while(1)
    {
        if(isPrime(i))
            break;
        i++;
    }
    return i;
}