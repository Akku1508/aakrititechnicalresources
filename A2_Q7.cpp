#include <iostream>
using namespace std;

int main(int argc, char **argv){
    int n;
    cin >> n;
    int i,j;
    for (i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if (i==j)
            {
                cout<<"*\t";
            }
            else
            {
                cout<<"\t";
            }

        }
        cout<<"\n";
    }

    
}
