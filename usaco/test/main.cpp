/*
ID: nish2491
PROG: test
LANG: C++11
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fout ("test.out");
    ifstream fin ("test.in");
    int a,b;
    fin>>a>>b;
    fout<<a+b<<endl;
    //cout << "Hello world!" << endl;
    return 0;
}
