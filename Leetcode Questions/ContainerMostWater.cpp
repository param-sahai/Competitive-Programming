#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int maxArea(vector<int> &height)
{
    int count = 0;
    for (auto x : height)
    {
        count++;
    }
    // cout<<height[0];
    int tempar=0; int ar=0;
    for(int j=count-1;j>=0;j--){
        for(int i=0;i<count;i++){
            tempar=(height[i]-height[j])*(j-i);
            ar=max(tempar,ar);
        }
    }
    cout<<ar;
    return ar;
    // return 0;
}
int main()
{
    vector<int> height(0);
    height.push_back(1);
    height.push_back(2);
    height.push_back(4);
    height.push_back(3);
    for(auto x: height){
        cout<<x<<" ";
    }
    cout<<maxArea(height);
    return 0;
}