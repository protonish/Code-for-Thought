#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>

using namespace std;

class BinaryCode
{
public:

    std::vector<std::string> decode(std::string Q)
    {
    int pp=0,rr=0;
    //string Q="12";
    int q[50],p[50],r[50];
    int siz=Q.length();

    for(int i=0;i<siz;i++)
    {
        q[i]=Q[i]-'0';
    }

    if(siz<2)
    {
         pp++;
         rr++;
    }
    else
    {
    p[0]=0;
    r[0]=1;
    p[1]=q[0]-p[0];
    r[1]=q[0]-r[0];
    }

    if(siz>2)
    for(int i=2;i<siz;i++)
    {
        if(i==2)
        {
            p[i]=q[i-1]-q[i-2];
            r[i]=q[i-1]-q[i-2];

            if(p[i]<0||p[i]>1)
            {
                pp++;
            }
            if(r[i]<0||r[i]>1)
            {
                rr++;
            }

        }
        else
        if(i==siz-1)
        {
            p[i]=q[i]-p[i-1];
            r[i]=q[i]-r[i-1];
            if(p[i]<0||p[i]>1)
            {
                pp++;

            }
            if(r[i]<0||r[i]>1)
            {
                rr++;

            }

        }
        else
        {
            p[i]=q[i-1]-q[i-2]+p[i-3];
            r[i]=q[i-1]-q[i-2]+r[i-3];
            if(p[i]<0||p[i]>1)
            {
                pp++;

            }
            if(r[i]<0||r[i]>1)
            {
                rr++;
            }

        }
    }
    string pps="",rrs="";
    if(pp==0)
    for(int i=0;i<siz;i++)
    {
        //cout<<p[i];
        pps+=(char)(((int)'0')+p[i]);
    }
    else pps="NONE";

    if(rr==0)
    for(int i=0;i<siz;i++)
    {
        //cout<<r[i];
        rrs+=(char)(((int)'0')+r[i]);
    }
    else rrs="NONE";


    std::vector<std::string> v;
    v.push_back(pps);
    v.push_back(rrs);

    return v;
    }//end of method

};

int main()
{
    vector<string> v;
    BinaryCode bc;
    //string s="123210122";
    string s="1";
    v=bc.decode(s);

    cout << v[0] <<" "<<v[1]<< endl;
    return 0;
}
