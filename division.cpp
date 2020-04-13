#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter a and b";
cin>>a>>b;
if(b>0)
{
c=a/b;
cout<<"divided value of a and b"<<c;
c=a%b;
cout<<"/nModular value of a and b "<<c;
}
else
cout<<"not possible";
return 0;
}
