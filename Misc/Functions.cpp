#include<iostream>
using namespace std;

/*
int factoial(int n)
{
while(n>0)
{
    return (n * factoial(n-1));
}
return 1;
}


int main()
{
    int n1=0,n2=0;
    cout<<"Enter 2 numbers"<<endl;
    cin>>n1;
    cin>>n2;

    cout<<"Factorial 1 is "<<factoial(n1);
    cout<<endl;
    cout<<"Factorial 2 is "<<factoial(n2);

}



bool isPrime(int n)
{
    if(n==1||n==2)
    return true;
    
    else{

    for(int i=2;i<=(n/2);i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    
    return true;
    }
}

int main()
{
    int a=0,b=0;
    cout<<"Enter two numbers"<<endl;
    cin>>a;
    cin>>b;

    for(int k=a;k<=b;k++)
    {
        if(isPrime(k))
        cout<<k<<endl;
    }

}
*/
int a=0,b=1,c=0;

void Fibonacci(int n)
{
    for(int i=1;i<=n;i++)
    {
        c=a+b;
        cout<<c<<" ,";
        a=b;
        b=c;

    }
}

int main(){
    int lt=0;
    cout<<"Enter the limit of the Fibonacci sequence ";
    cin>>lt;
    cout<<endl;
    cout<<"0 ,1 , ";
    Fibonacci(lt);
}