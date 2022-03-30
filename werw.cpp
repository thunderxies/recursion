#include<stdio.h>
#include<iostream>
using namespace std;
int pow(int m, int n)
{
    if(n==0)
    return 1;
return pow(m,n-1)*m;    
}
int main()
{
    int r = pow(2,9);//m=2 and n=9
    cout<<r;
return 0;
}