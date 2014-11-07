#include <iostream>

using namespace std;

int main()
{
    long int n,k,m,a,b,avg,sum=0,i;
    cin>>n>>m;
    while(m--)
    {
        cin>>a>>b>>k;

        /*timeout
        for(i=a;i<=b;i++)
        {
            sum+=k;
        }*/

        sum+=(b-a+1)*k;
    }
    avg=sum/n;
    cout << avg << endl;
    return 0;
}
