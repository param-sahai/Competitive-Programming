#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    string sf,tf;
    cout<<"Enter the name of the source file: "; 
    cin>>sf;
    cout<<endl;

    cout<<"Enter the name of the Target file: ";
    cin>>tf;
    cout<<endl;

    ifstream f1;
    f1.open(sf);
    ofstream f2;
    f2.open(tf);
    string str;
    while(f1.eof()==0)
    {
        getline(f1,str);
       f2<<str+"\n"; 
    }
    f1.close();
    f2.close();
    cout<<"File copied successfully!"<<endl;
    return 0;
}