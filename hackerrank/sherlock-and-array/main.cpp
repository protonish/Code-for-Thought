#include<iostream>

using namespace std;

typedef long long LL;

int main()
{
    long long int pre[100005];
    int t;
    cin >> t;
    while(t--)
    {
        LL n,i,j,flag=0,x;
        cin >> n;
        for(i=1; i<=n; i++)
        {
            cin >> x;
            pre[i]=pre[i-1]+x;
        }
        for(i=1; i<=n; i++)
        {
            // check if sum to left is same as sum to right
            if(pre[i-1]==(pre[n]-pre[i]))flag=1;
        }
        if(flag)cout << "YES"<<endl;
        else cout << "NO"<<endl;
    }
    return 0;
}
