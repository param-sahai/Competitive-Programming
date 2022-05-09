#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    int n=0;
    cout<<"enter a number: "<<endl;
    cin>>n;
    ofstream f;
    f.open("testfile.txt");
    f<<n;
    // f.close();
    cout<<"File written"<<endl;
    return 0;
}