#include <iostream>
using namespace std;


int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int i,isp,osp;
    isp=-1;
    osp=n/2;
    for (i=1;i<=n;i++)
    {
        for (int j=1;j<=osp;j++)
        {
            cout<<"\t";
        }
        cout<<"*\t";
        for(int j=1;j<=isp;j++)
        {
            cout<<"\t";
        }
        if((i>1) &&(i<n))
        {
            cout<<"*\t";
        }
        
        
        if(i<=n/2)
        {
            isp+=2;
            osp--;
        }
        else
        {
            isp-=2;
            osp++;
        }
        cout<<"\n";   
    }
}
    
