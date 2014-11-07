#include <iostream>
#include <new>

using namespace std;

int main()
{
    int k1,k2,k3,n,t;
    int *a;

    scanf("%d",&t);
    scanf("%d",&n);
    scanf("%d",&k1);
    scanf("%d",&k2);
    scanf("%d",&k3);

    a = new (nothrow) int[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d",a[i]);
    }


    delete[] a;
    cout << "Hello world!" << endl;
    return 0;
}
