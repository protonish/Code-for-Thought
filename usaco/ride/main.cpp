/*
ID: nish2491
PROG: ride
LANG: C++11
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string a,b;
    fin>>a>>b;
    long int p=1,q=1;
    int i;
    for(i=0;i<a.length();i++)
    {
        p*=a[i]-64;
    }
    for(i=0;i<b.length();i++)
    {
        q*=b[i]-64;
    }
    if(p%47==q%47)
        fout<<"GO"<<endl;
    else
        fout<<"STAY"<<endl;
    //cout << "Hello world!" << endl;
    return 0;
}
