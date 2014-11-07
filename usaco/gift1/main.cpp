/*
ID: nish2491
PROG: gift1
LANG: C++11
*/
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <fstream>

using namespace std;

#define vs vector<string>
#define vi vector<int>
#define fnd(v,n) find(v.begin(),v.end(),n)

int main()
{
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int t,amount,add,ppl,dd;
    string name,name1;
    vs v;
    v.reserve(10);
    fin>>t;
    while(t--)
    {
        fin>>name;
        v.push_back(name);
    }
    /*t=v.size();
    vi in(t,0);
    vi out(t,0);
    vector<string> ::iterator ii=v.begin();
    while(t--)
    {
        fin>>name;
        fin>>amount>>ppl;
        add=amount/ppl;
        ii=find(v.begin(), v.end(), name);
        dd=distance(v.begin(),ii);
        if(amount%ppl>0)
        {
            in[dd-1]+=amount%ppl;
        }
        out[dd-1]+=amount;
        while(ppl--)
        {
            fin>>name1;
            ii=find(v.begin(), v.end(), name1);
            dd=distance(v.begin(),ii);
            if(add>0)
            {
                in[dd-1]+=add;
            }

        }
    }*/

    for(int i=0;i<v.size();i++)
    {
        fout<<v[i]<<" "<<endl;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
