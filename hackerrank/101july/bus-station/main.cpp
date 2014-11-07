#include <iostream>

using namespace std;

#define rep(i,n) for(i=0;i<n;i++)
#define rep1(i,n) for(i=1;i<n-1;i++)

void merge(int a[],int l,int m,int r);
void mergeSort(int a[],int l,int r);

int main()
{
    int n,i;
    long sum=0;
    int ar[9999];


    cin>>n;
    int a[n];
    int s[n];
    rep(i,n)
    {
        cin>>a[i];
        //s[i]=0;
    }

    rep(i,n)
    {
        sum+=a[i];
        s[i]=sum;
    }

    i=0;
        while(i<n&&s[i]!=0&&s[i])
        {
            //cout<<s[i]<<" ";
            i++;
        }

    int p=sizeof(s)/sizeof(s[0]);
    //cout<<"\n\n\n"<<p;
    long k= s[p-1];
    int m=0;
    rep(i,n)
    {
        if(s[i]!=1)
        if(k%s[i]==0)
        {
            ar[m]=s[i];
            m++;
        }

    }
    int p1=sizeof(s)/sizeof(s[0]);
    mergeSort(ar,0,p1-1);

    while(i<p1&&ar[i]!=0)
    {
        cout<<ar[i]<<" ";
        i++;
    }

    //cout << "Hello world!" << endl;
    return 0;
}

void merge(int a[],int l,int m,int r)
{
    int n1,n2,i,j,k;
    //no of elements in the two arrays
    n1=m-l+1;
    n2=r-m;

    //left and right arrays
    int L[n1],R[n2];

    //copying elements into arrays
    for(int i=0;i<n1;i++)
    {
        L[i]=a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        R[j]=a[m+j+1];
    }

    //merging the temp arrays into one sorted array
    i=0;
    j=0;
    k=l;

    while(i<n1&&j<n2)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else
        {
            a[k]=R[j];
            j++;
        }
        k++;
    }

    while(i<n1)
    {
        a[k]=L[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        a[k]=R[j];
        j++;
        k++;
    }

}

void mergeSort(int a[],int l,int r)
{
    //int m;
    if(l<r)
    {
        int m= l+(r-l)/2; //same as (r+l)/2 but prevents overflow
        mergeSort(a,l,m);
        mergeSort(a,m+1,r);
        merge(a,l,m,r);
    }
}
