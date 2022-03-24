#include<iostream>
using namespace std;
  
int sum(int n)
{
    return n*(n+1)/2; 
}
int main()
{
    int r;
    r=sum(3);//1+2+3=6
    cout<<r;
    
    return 0;
}