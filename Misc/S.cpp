#include<iostream>
#include<fstream>
#include<string>
using namespace std;
 class Student{
     public:
     string name;
     int age;
     int rn;
     void getdata()
     {
         cout<<"Enter the name: ";
         cin>>name;
         cout<<"Enter the age: ";
         cin>>age;
         cout<<"Enter the roll number: ";
         cin>>rn;
     }
     void putdata()
     {
         cout<<"Student's info:\n";
         cout<<"Name: "<<name<<endl;
         cout<<"Age: "<<age<<endl;
         cout<<"Roll number: "<<rn<<endl;
     }

 };
 int main()
 {
     Student s;
     ofstream f;
     f.open("Info.txt");
     cout<<"File created successfully!"<<endl;
     s.getdata();
     f.write((char*)&s,sizeof(s));
     cout<<"Students info saved"<<endl;
     f.close();

     ifstream f1;
     f1.open("Info.txt");
     f1.read((char*)&s,sizeof(s));
     s.putdata();
     f1.close();
     return 0;

 }