#include<iostream>
using namespace std;

int main()
{
int n=0;
cout<<"Enter the limit of the Fibonnaci series ";
cin>>n;
int a=0,b=1,c=0;
int rno[n]={0};
rno[0]++;
rno[1]++;
cout<<"0, 1";
for(int i=1;;i++)
{
    c=a+b;
    a=b;
    b=c;

    if(c<=n)
    cout<<", "<<c;
    else 
    break;

    rno[c]++;
    
    
}
cout<<endl;
for(int i=0;i<n;i++)
{
    
    if(rno[i]==0)
    cout<<i<<" ";
}

return 0;
}