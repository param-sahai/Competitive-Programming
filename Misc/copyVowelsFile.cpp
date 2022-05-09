#include<iostream>
#include<fstream>
#include<string>
using namespace std;
 int main()
 {
     string str;
     ofstream f1;
     f1.open("FIRST.txt");
     cout<<"Enter some texts for the First file\n";
     getline(cin, str);
     f1<<str;
     cout<<"Text saved!";
     f1.close();
    
     ifstream f;
     f.open("FIRST.txt");

     ofstream f2;
     f2.open("SECOND.txt");
    
    char word[30];
     while(f.eof()==0)
	{
		f>>word;
		if(word[0]=='a'||word[0]=='e'||word[0]=='i'||word[0]=='o'||word[0]=='u')
			f2<<word<<" ";
	}
    f1.close();
    f2.close();
    return 0;
 }