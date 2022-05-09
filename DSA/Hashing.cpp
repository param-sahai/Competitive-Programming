#include<bits/stdc++.h>
using namespace std;
class Hash{
    int size;
    list<int> *table;
public:
    Hash(int v){
        size=v;
        table = new list<int>[size];
    }
    int returnHashValue(int k){
        return k%size;
    }

    void InsertElement(int key){
        int i=returnHashValue(key);
        table[i].push_back(key);
    }

    void Delete(int key){
        int index=returnHashValue(key);
        list<int>::iterator i;
        for( i= table[index].begin(); i != table[index].end(); i++){
            if(*i == key)
            break;
        }
        //if a key isnt found, then the iterator would reach the end of the list searching it.
        //if a key is present,then the iterator would point to that node. 
        //if a key is present at the end, then iterator would point to it,i.e just before NULL;
        if(i != table[index].end())
            table[index].erase(i);
    }

    void displayHash(){
        for(int index=0;index<size;index++){
            cout<<index;
            for(auto x:table[index])
            cout<<" --> "<< x;
         cout<<endl;
        }
    }
};

int main(){
    int keys[]={9,2,13,3,43,56};
    Hash h(10);
    int n=sizeof(keys)/sizeof(keys[0]);
    
    cout<<" inserting elements "<<endl;
    for(int i=0;i<n;i++){
        h.InsertElement(keys[i]);
    }

    //displaying elements
    cout<<" displaying elements "<<endl;
    h.displayHash();

    //deleting elements
    cout<<" deleting elements "<<endl;
    // h.Delete(3);
    h.Delete(43);
    // h.Delete(1);
    h.displayHash();

 return 0;
}