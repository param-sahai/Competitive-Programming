#include<iostream>
#include<cmath>
#define ll long long
// #define pi 3.1415927
using namespace std;
double area(ll r){
    // double pi = 2*acos(0.0);
    double area=r*r;
    return area;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;
    for(int t=1;t<=T;t++){
        ll R=0,A=0,B=0,cnt=1;
        double ar=0;
        cin>>R>>A>>B; 
    
        while(R!=0){
            ar+= area(R);
            if(cnt%2==0)
                R=R/B;
            else
                R=R*A;
            cnt++;
        }
        double pi = 2*acos(0.0);
        ar=ar*pi;
        cout<<"Case #"<<t<<": "<<ar<<"\n";
    }
 return 0;
}