#include <iostream>

using namespace std;

int main()
{
	int n,c,m,init,a=0,b=0,p=0,temp=0,count1=0,a1,t;
	cin>>t;
	for(b=0;b<t;b++)
	{
   cin>>n;
	cin>>c;
	cin>>m;
	init=n/c;

    temp=init;
    count1=temp;

	while(temp>=m)
	{
		a1=temp/m;
		count1+=a1;
		temp=a1 + (temp%m);
	}

    cout <<count1<< endl;
}
    return 0;
}
