#include<iostream>
using namespace std;
static int n;
int isPrime(int i)
{
    while(i<=(n/2))
    {
      if(n%i==0)
      return 0;
      else
      return isPrime(++i);
    }
    return 1;
}
int main()
{
    cout<<"Code By: Param Sahai\nUID:20BCS5964\n";
    cout<<endl;
    cout<<"#########################################"<<endl;
    cout<<"Enter a number to be checked for Prime: ";
    cin>>n;
    
    int k=isPrime(2);
    //if(k==0)
    //cout<<n<<" is not a Prime Number!\n";
    //else
    if (k==1)
    cout<<n<<" is a Prime Number!\n";
    
    cout<<"#########################################"<<endl;
    return 0;

}