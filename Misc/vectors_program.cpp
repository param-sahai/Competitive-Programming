#include<iostream>
#include<vector>
using namespace std;
void display(vector<int> &v)
{
    cout<<"The elements are:"<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<i+1<<". "<<v[i]<<endl;
    }
    cout<<endl;
}
int main()
{
    int n=0, e=0;
    vector<int> vec1;
    cout<<"Enter the number of elements to be stored in the vector"<<endl;
    cin>>n;
    cout<<"Enter elements:"<<endl;
    for (int i=0;i<n;i++)
    {
        cout<<i+1<<". ";
        // cin>>vec1[i];
        cin>>e;
        vec1.push_back(e);
    }
    cout<<endl;
    display(vec1);
    cout<<vec1.size()<<endl;
    vec1.push_back(9);
    display(vec1);
    cout<<vec1.size()<<endl;
}



