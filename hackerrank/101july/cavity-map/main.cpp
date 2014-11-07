#include <iostream>

using namespace std;
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n-1;i++)

int main()
{
    int n,i,j;
    cin>>n;
    string arr[n];
    rep(i,n)
    {
        cin>>arr[i];
    }
    int a[n][n];

    rep(i,n)
    {
        rep(j,n)
        {
            a[i][j]=arr[i][j]-'0';
        }
    }

    rep1(i,n)
    {
        rep1(j,n)
        {
            if(a[i][j]>a[i][j-1]&&a[i][j]>a[i][j+1])
            {
                a[i][j]=0;
            }
        }
    }

    rep(i,n)
    {
        rep(j,n)
        {
                if(a[i][j]==0)
                cout<<"X";
                else
                cout<<a[i][j];
        }
        cout<<"\n";
    }

    //cout << "Hello world!" << endl;
    return 0;
}
