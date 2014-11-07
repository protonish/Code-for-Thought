#include <iostream>

using namespace std;
int rev(int n);
int main()
{
	int a,b,c,n,i;
	//string a1,b1;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		a=rev(a);
		b=rev(b);
		c=a+b;
		//cout<<c<<endl;
		c=rev(c);
		cout<<c<<endl;
	}
    return 0;
}

int rev(int n)
{
int r=0;
while(n>0)
{
	r=r*10+n%10;
	n=n/10;
}
return r;
}
