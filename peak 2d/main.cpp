#include <iostream>
#include<vector>
using namespace std;

#define vi vector<int>
#define rep(i,n) for(i=0;i<n;i++)
#define rep1(j,n) for(j=0;j<n;j++)

int main()
{
    vector<vector<int> > v;
    vector<int> row;
    int i,j;
    cout << "Enter elements into matrix:" << endl;
    rep(i,4)
    {
    v.push_back(row);
    }

    rep(i,4)
    {
        rep1(j,4)
        {
            int a; cin>>a;
            v[i].push_back(a);
        }
    }

    rep(i,4)
    {
        rep1(j,4)
        {
            cout<<v[i][j]<<"\t";
        }
            cout<< endl;
    }

    int m=4;
    //cout << "Hello world!" << endl;
    return 0;
}
