#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin>>t;
    long int p=0;
    int chk=0;
    int k=0;
    while(t--)
    {
        vector<string> v;
        vector<string> bin;
        char c;
        while (cin.get(c))
        {
        // Process c here.
        if(c=='\n')
        {
            chk++;
            if(chk>1)
             break;
        }


        if(c=='A')
        {
            p++;
           v.push_back(string("A"));
           //cout << "filling a "<<p << endl;
           if(p<0||p>1)
           {
            if(c=='A')
            {
                p--;
                bin.push_back(string(c+""));
                //cout << "removing a "<<p << endl;
            }
            else
            {
                p++;
                bin.push_back(string(c+""));
                //cout << "removing b "<<p << endl;
            }
           }
        }
        else
        if(c=='B')
        {
            p--;
            v.push_back(string("B"));

            //cout << "filling b "<<p << endl;
            if(p<0||p>1)
           {
            if(c=='A')
            {
                p--;
                bin.push_back(string(c+""));
                //cout << "removing a "<<p << endl;
            }
            else
            {
                p++;
                bin.push_back(string(c+""));
                //cout << "removing b "<<p << endl;
            }
        }
        }

        }
        if(v[0]=="B")
            k=1;
        int n=bin.size();
        cout<<n-k<<endl;
        v.clear();
        bin.clear();
        p=0;
        k=0;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
