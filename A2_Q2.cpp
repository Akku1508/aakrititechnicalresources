#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int i,j;
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=(n-i+1);j++)
       {
        cout<<"*\t";
       }

        cout<<"\n";
       
       
    }
    
}
