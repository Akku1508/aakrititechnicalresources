#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char **argv)
{
    int s=0,rem,n,dgt;
    cin >> n;

    for( dgt=1;n>0;dgt++)
    {
        
        rem= n%10;
        n=n/10;
        s+=dgt*pow(10,rem-1);
        
    }
    cout<< (s); 

    
}/*
