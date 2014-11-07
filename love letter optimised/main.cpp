#include <iostream>
#include<string>
#include<string.h>
using namespace std;

int main()
{
	string text;
	int i,n,a,b=0,c=0,t,p,d;
cin>>t;
for(p=0;p<t;p++)
{
	cout<<"";
	cin>>text;

	string rev(text.rbegin(),text.rend());
	if(text==rev)
		cout<<0<<endl;
	else
	{
        n=text.length();

		for(i=0;i<n/2;i++)
		{
			if(text[i]==text[n-1-i])
			{
				//cout<<"ok"<<endl;
			}
			else
			{
				if(text[i]>text[n-1-i])
				{
						b+=text[i]-text[n-1-i];
				}
				else
				{
					b+=text[n-1-i]-text[i];
				}
			}
		}
		string rev(text.rbegin(),text.rend());
		if(text==rev)
		{
			c=1;
			cout<<"ho gaya!\n";
		}
		else
			c=0;

	//cout<<text<<endl;
	cout<<b<<endl;
	b=0;
	}
}
    return 0;
}
