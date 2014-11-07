#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int t,p=0,m1;
    long long int n,c;
    double m;
    cin>>t;
    while(t--)
    {
        cin>>n;

        while(n>1)
        {
            //c=n&(n-1);
            m=log2(n);
            m1=m;
            //cout << "\nm="<<m<<"\t m1="<<m1 << endl;
            if((double)(m/m1)==1.0)
            {
                n/=2;
                //cout <<"pow" << endl;
                p++;
            }
            else
            {
                n=n-pow(2,m1);
                //cout << "nope" << endl;
                p++;
            }
        }
        //cout << "\n"<<p << endl;
        if(p%2==0)
            cout << "Richard" << endl;
        else
            cout << "Louise" << endl;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
