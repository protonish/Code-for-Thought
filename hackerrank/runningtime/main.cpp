#include <iostream>

using namespace std;

#define repeat(i,p,n) for(int i=p;i<n;i++)

int main()
{
    //int arr[n];//={2,1,3,1,2};
    int i,j,n,key,temp,c=0;
    //n=sizeof(arr)/sizeof(arr[0]);

    cin>>n;

    int arr[n];
    repeat(i,0,n)
        cin>>arr[i];
    repeat(j,1,n)
    {
        key=arr[j];
        i=j-1;
        while(i>=0&&arr[i]>key)
        {
            temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
            i--;
            c++;
        }
    }
    //repeat(i,0,n)
    //cout << arr[i] << endl;
    cout << "count= " <<c<< endl;
    return 0;
}
