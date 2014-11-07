#include <iostream>
#include <cstring>
#include<string>
#include <cstdio>

using namespace std;

#define RANGE 122
void countSort(char *str)
{
    // The output character array that will have sorted str
    char output[strlen(str)];

    // Create a count array to store count of inidividul characters and
    // initialize count array as 0
    int counti[RANGE + 1], i;
    memset(counti, 0, sizeof(counti));

    // Store count of each character
    for(i = 0; str[i]; ++i)
        ++counti[str[i]];

    cout<<"COUNT"<<endl;
    for (i = 1; i <= RANGE; ++i)
        cout<<counti[i]<<" ";
    // Change count[i] so that count[i] now contains actual position of
    // this character in output array
    for (i = 1; i <= RANGE; ++i)
        counti[i] += counti[i-1];

    // Build the output character array
    for (i = 0; str[i]; ++i)
    {
        output[counti[str[i]]-1] = str[i];
        --counti[str[i]];
    }

    // Copy the output array to str, so that str now
    // contains sorted characters
    for (i = 0; str[i]; ++i)
        str[i] = output[i];
}

int main()
{
    string arr1;
    cin>>arr1;
    char str[arr1.length()];
    strcpy(str,arr1.c_str());
    //char str[] = "geeksforgeeks";

    countSort(str);

    cout<<str<<endl;

    return 0;
}
