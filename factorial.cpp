#include<stdio.h>
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1)
    return 1;
return fact(n-1)*n;    
}
int main()
{
int r= fact(4);
cout<<r;
    return 0;
}