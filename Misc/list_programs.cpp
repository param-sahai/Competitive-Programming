#include<iostream>
#include<list>
using namespace std;

void display(list <int> &l2){
    list<int>:: iterator itr;
    for(itr=l2.begin();itr!=l2.end();itr++)
    {
        cout<<*itr<<" ";
    }
    cout<<endl;
}
int main(){
    list<int> l1;
    l1.push_front(12);
    l1.push_front(19);
    l1.push_front(24);
    l1.push_front(32);
    l1.push_front(7);
    
    cout<<endl<<endl;
    display(l1);
    return 0;
}
