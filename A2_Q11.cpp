#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    int n;
    cin >> n;
    int i,j,k=1;
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<k<<"\t";
            k++;
        }
        cout<<"\n";
    }
    
    
}
