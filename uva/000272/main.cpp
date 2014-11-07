#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int k=0;
    char c;
    string s="";
    while(cin.get(c))
    {
        if(c=='\"')
        {
            if(k==0)
            {
                cout<<"``";
                k=1;
            }
            else
            {
                cout<<"''";
                k=0;
            }

        }
        else
            cout<<c;
    }


    //cout << "Hello world!" << endl;
    return 0;
}
