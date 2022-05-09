#include<iostream>
#include<string>
using namespace std;
bool isSubsequence(string str, string subseq){
    int i=0;
    for(auto x: str){
        if(subseq[i]==x){
        i++;
            if(i>subseq.length())
            break;
        }
    }
    // cout<<"i: "<<i<<"\n";
    if(i==subseq.length())
    return true;
    else
    return false;
}
int main()
{
    string str= "",subseq="";
    cout<<"Enter a string: ";
    cin>>str;
    cout<<"Enter subsequence to be checked: ";
    cin>>subseq;
    if(isSubsequence(str,subseq))
    cout<<"Yes\n";
    else
    cout<<"No\n";
 return 0;
}