#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define vs vector<string>
int main()
{
    vs v1,v2;
    int n;
    cin>>n;
    v1.reserve(n);
    v2.reserve(n);

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        v1.push_back(s);
    }

    v2=v1;

    for(int i=1;i<n-1;i++)
    {
        for(int j=1;j<n-1;j++)
        {
            if(v1[i][j]>v1[i][j-1]&&v1[i][j]>v1[i][j+1]&&v1[i][j]>v1[i-1][j]&&v1[i][j]>v1[i+1][j])
            {
                v2[i][j]='X';
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<v2[i][j];
        }
        cout<<endl;
    }

    return 0;
}
