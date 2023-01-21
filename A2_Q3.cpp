#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int i,j;
    for(i=1;i<=n+1;i++)
    {
       for(j=1;j<=(n+1);j++)
       {
        if (j<=(n-i+1))
        {
            cout<<"\t";
        }
        else
        {
            cout<<"*\t";
        }
       }

        cout<<"\n";
       
       
    }
    
}
