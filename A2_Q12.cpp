#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int i,j,first=0,second=1;
    
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            
            if(i==1)
            {
                cout<<first<<"\t";
            }
            else if((i==2)&&(j==1))
            {
                cout<<second<<"\t";
            }
            else
            {    
                int k=first+second;
                cout<<k<<"\t";
                first=second;
                second=k;
            }
            
            
        }
        cout<<"\n";
    }
    
    
}
