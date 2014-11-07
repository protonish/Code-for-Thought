#include <iostream>

using namespace std;

int main()
{
    int h,i,n,a,t,p;
	cin>>t;

	for(p=0;p<t;p++)
	{
	h=1;
	cin>>n;
    for(i=0;i<n;i++)
	{
        a=i%2;
        switch(a)
        {
		case 0:
			h=h*2;
			break;
		case 1:
			h=h+1;
			break;
        }
	}
    cout << h << endl;
	}
    return 0;
}

