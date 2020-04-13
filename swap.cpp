#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"enter a and b";
cin>>a>>b;
c=a;
a=b;
b=c;
cout<<a<<"\t"<<b;
return 0;
}