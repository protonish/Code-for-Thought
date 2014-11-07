#include <iostream>
#include<bitset>
#include<algorithm>
#include<cmath>
#include<cstring>
using namespace std;
#define vi vector<int>
int main()
{
    int alt=0,i,j,m;
    long int n,k;
    cin>>n>>k;
    //a=abs(b-c);

    vi v;
    long long int s;
    cin>>s;

    for(; s; s/=10)
    {
        v.push_back( s%10 );
    }
    reverse(v.begin(),v.end());
    int b[n];
    b[0]=v.front();
    alt+=b[0];
    i=1;j=1;m=0;
    while(j<n)
    {

        b[j]=abs(v[i]-alt);
        cout<<"step:"<<j<<" alt="<<alt<<" b[j]="<<b[j]<<endl;
        alt=alt|b[j];
        if(j%(k-1)==0)
        {
            alt=abs(alt-b[m]);
            alt=alt|b[j];
            m++;
        }
        i++;j++;
    }

    b[n-1]=v.back();
    for(long int p=0;p<n;p++)
    {
    cout << b[p];
    }

    return 0;
}
