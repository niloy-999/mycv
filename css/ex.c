#include <stdio.h>
#include <string.h>

void sorting(int a[1000])
{
    int temp=0;
    a[0]=temp;
    for (int i=0; i<1000; i++)
    {
        for ( int j=i+1; j<1000; j++) {
            if (a[j]<a[i])
            {
                a[j]=temp;
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for (int i=0; i<1000; i++) {
        printf("%d\t",a[i]);
    }
}
int main()
{
    int array[1000],a[1000],b[1000],c[1000],d[10000],e[1000];
    int n;
    scanf("%d",&n);
    for (int i=0; i<n; i++)
    {
        scanf("%d",&array[i]);
    }
    for (int i=0; i<n; i++)
    {
        if (array[i]%5 == 0)
        {
            i=a[i];
            
        }
        if (array[i]%5 == 1)
        {
            i=b[i];
        }
        if (array[i]%5 == 2)
        {
            i=c[i];
        }
        if (array[i]%5 == 3)
        {
            i=d[i];
        }
        if (array[i]%5 == 4)
        {
            i=e[i];
        }
    }
    for (int i=0; i<n; i++)
    {
        sorting(a);
        sorting(b);
        sorting(c);
        sorting(d);
        sorting(e);
        
    }
    return 0;
}
