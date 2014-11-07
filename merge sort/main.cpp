#include <iostream>

using namespace std;

void merge(int a[],int l,int m,int r);
void mergeSort(int a[],int l,int r);
void printArr(int a[],int n);

int main()
{
    int a[]={2,4,5,7,1,2,3,6};
    int n = sizeof(a)/sizeof(a[0]);

    //int i,j;

    cout << "Given:" << endl;
    printArr(a,n);

    mergeSort(a,0,n-1);

    cout << "Sorted:" << endl;
    printArr(a,n);

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

void printArr(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
