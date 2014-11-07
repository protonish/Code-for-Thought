#include <iostream>
#include <cstring>

using namespace std;

#define R 122
int main()
{
    int n;
    string str;

    cin>>n;
    int c[n][R+1];
    memset(c,0,sizeof(c));

    for(int i=0;i<n;i++)
    {
        cin>>str;
        char ar[str.length()];
        strcpy(ar,str.c_str());

        for(int j=0;ar[j];j++)
        {
            c[i][ar[j]]++;
        }

    }

    int cc[R+1],gem=0;
    memset(cc,0,sizeof(cc));

    for(int j=93;j<R+1;j++)
    {
        for(int i=0;i<n;i++)
        {
            if(c[i][j]>0)
            cc[j]++;
        }
    }
    for(int j=93;j<R+1;j++)
    {
        if(cc[j]>=n)
        {
            gem++;
        }
    }
    cout << gem << endl;
    return 0;
}
