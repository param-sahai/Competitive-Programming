#include<iostream>
#include<unordered_set>
using namespace std;
int main()
{
    unordered_multiset<int>s;
    s.insert(14);
    s.insert(7);
    s.insert(69);
    s.insert(1);
    s.insert(7);
    for(auto x:s){
        cout<<x<<" ";
    }
 return 0;
}