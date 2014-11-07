#include <iostream>

using namespace std;

int main()
{
    long int n,i,j;
    int t,veh,p;
    cin>>n>>t;
    int width[n];

    for(i=0;i<n;i++)
    {
        cin>>width[i];
    }
    for(p=0;p<t;p++)
    {
    cin>>i>>j;

    veh=3;
    while(i<=j)
    {
        if(width[i]<veh)
            veh=width[i];

        i++;
    }
    cout << veh << endl;
    i=NULL;
    j=NULL;
    }
    return 0;
}
