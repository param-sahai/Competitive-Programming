#include<iostream>
#define ll long long
using namespace std;
int main()
{
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
 int T;
 cin>>T;
 for(int t=1;t<=T;t++){
     cout<<"Case #"<<t<<":"<<"\n";
     int R=0,C=0;
     cin>>R>>C;
     for(int i=0;i<(2*R)+1;i++){
         for(int j=0;j<(2*C)+1;j++){
             if((i==0 && (j==0||j==1)) || (i==1 && j==0))
             {
                 cout<<".";
             }
             else if(i%2==0 && j%2==0)
             {
                 cout<<"+";
             }
             else if(i%2==0 && j%2!=0)
             {
                 cout<<"-";
             }
             else if(i%2!=0 && j%2==0)
             {
                 cout<<"|";
             }
             else
             {
                 cout<<".";
             }
         }
         cout<<"\n";
     }
 }
 return 0;
}