#include <iostream>
#include<cmath>

using namespace std;

void insertion(int a[],int n);

int main()
{
    int a[5]={12, 11, 13, 5, 6},k,n;

    n=sizeof(a)/sizeof(a[0]);

    insertion(a,n);
    return 0;
}

void insertion(int a[],int n)
{
    int i,j,key,temp;
    for(j=1;j<n;j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0&&a[i]>key)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
    }

    for(i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
