#include<iostream>
using namespace std;
int main(int argc, char **argv)

{
    int n;
    cin >> n;
    int k,kfac,r,rfac,j,jfac,result;
    for (k=0;k<=n-1;k++)
    {
        for(j=0;j<=k;j++)
        {
            if(k==0)
            {
                kfac=1;
            }
            else
            {
                kfac=1;
                for(int i=1;i<=k;i++)
                {
                    kfac=kfac*i;
                }
            }
            r=k-j;
            if(r==0)
            {
                rfac=1;
            }
            else
            {
                rfac=1;
                for(int i=1;i<=r;i++)
                {
                    rfac=rfac*i;
                }
            }
            if(j==0)
            {
                jfac=1;
            }
            else
            {
                jfac=1;
                for(int i=1;i<=j;i++)
                {
                    jfac=jfac*i;
                }
            }
            result=kfac/(rfac*jfac);
            cout<<result<<"\t";

        }
        cout<<"\n";
    }

}
