#include <stdio.h>

void inra(int x[], int n)
{
    for(int i=0; i<n; i++)
        printf("%d \t", x[i]);
    printf("\n");
}

int tong(int x[], int n)
{
    int sum = 0;
    for(int i=0; i<n; i++)
        sum += x[i];
    return sum;
}

void cogangtim(int k, int m, int X[], int n)
{
    //k--;
    if(X[k] == 0)
    {
        for(int i=-9; i<=9; i++)
        {
            X[k] = i;
            m--;
            if(m == 0)
            {
                int sum = tong(X, n);
                if(sum == 10)
                    inra(X, n);
            }
            else
            {
                cogangtim(k+1, m, X, n);
            }
            X[k] = 0;
            m++;
        }
    }
    else
        cogangtim(k+1, m, X, n);
}

int main()
{
    int X[5] = {1, 0, 7 , 0 , 3};
    size_t n = sizeof(X)/sizeof(X[0]);
    cogangtim(0, 2, X, n);

    return 0;
}
