#include <iostream>

using namespace std;

int main()
{
   int n;
 cout<<"Enter a number to print pattern"<<endl;
 cin>>n;
 for(int i=1;i<=n;i++)
 {
     for(int j=1;j<=i;j++)
     {
         cout<<"* ";
     }
     cout<<endl;
 }
 cout<<"_____________________________________"<<endl;
 for(int i=1;i<=n;i++)
 {
     //loop for giving spaces in b/w
     for(int j=1;j<n-(i-1);j++)
     {
         cout<<"  ";
     }
     //loop for printing *
     for(int j=(n-(i-1));j<=n;j++)
     {
         cout<<"* ";
     }
     //new line
     cout<<endl;
 }
 cout<<"_____________________________________"<<endl;
 for(int i=1;i<=n;i++)
 {
     for(int j=1;j<=n-(i-1);j++)
     {
         cout<<"* ";
     }

     cout<<endl;
 }
return 0;
}