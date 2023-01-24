#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int spc,star,i;
    spc= n/2;
    star=1;
    for(i=1;i<=n;i++)
    {
        for(int j=1;j<=spc;j++)
        {
            cout<<"\t";
        }
        for(int j=1;j<=star;j++)
        {
            cout<<"*\t";

        }
        if (i<=n/2)
        {
            star+=2;
            spc--;
        }
        else
        {
            spc++;
            star-=2;
        }
        cout<<"\n";
    }
    
            
       

       
       
    
    
}
