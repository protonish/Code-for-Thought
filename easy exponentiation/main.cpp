#include <iostream>
#include <cmath>

using namespace std;

int exponent(int a, int n)
{
    int e;
    if(n==0) return 1;
    if(n==1) return a;
    else
    {
        e=exponent(a,n/2);
        return pow(e,2)*exponent(a,n%2);
    }

}

int main()
{
    cout << exponent(2,5) << endl;
    return 0;
}
