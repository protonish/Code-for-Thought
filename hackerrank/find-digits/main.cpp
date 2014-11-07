#include <iostream>

using namespace std;

#define rep(i,n) for(i=0;i<n;i++)

int main()
{
    long int m,n;
    int t,i,siz,a[11],c=0;

    cin>>t;
    rep(i,t)
    {
        cin>>n;
        m=n;
        int p=0;
        while(m/10>=1)
        {
            a[p]=m%10;
            p++;
            m=m/10;
        }

        //siz=sizeof(a)/sizeof(a[0]);

        rep(i,p)
        {
            if(a[i]!=0)
            if(n%a[i]==0)
                c++;
        }

        if(m!=0)
        if(n%m==0)
            c++;

        cout<<c<<endl;

    }
    //cout << "Hello world!" << endl;
    return 0;
}
