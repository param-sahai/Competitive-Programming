#include <iostream>
#include <fstream>
using namespace std;
class student
{

 public:
 string name;
 int age;
 public:
 void getData(void)
{ 
cout<<"Enter name:\n"; 
cin>>name;
cout<<"Enter age:\n"; 
cin>>age;
 }
 void showData(void)
 {
cout<<"Name:\n"<<name<<"\nAge:\n"<<age<<endl;
 }
};

int main()
{
 student s;
ofstream file;
file.open("aaa.txt");
if(!file)
 {
cout<<"Error in creating file.."<<endl;
 return 0;
 }
 else{
cout<<"\nFile created successfully."<<endl;
 }
 s.getData();
file.write((char*)&s, sizeof(s) );
file.close();
cout<<"\nFile saved and closed succesfully."<<endl;
ifstream file1;
 file1.open("aaa.txt");
 if(!file1){
cout<<"Error in opening file..";
 return 0;
 }
 file1.read((char*)&s, sizeof(s) );
s.showData();
 file1.close();
 return 0;
}