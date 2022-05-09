#include<iostream>
using namespace std;
class Area
{
  int A,l,b;
  public:
  Area()                    //default constructor
  {
    l=2;
    b=4;

    cout<<"Simple constructor called\n";
    cout<<"length="<<l<<"\nbreadth="<<b<<endl;
  }

  Area(int x,int y)         //parameterized constructor
  {
    l=x;
    b=y;
  }

  void calc();
  void print();

  ~Area();

};

void Area::calc()
{
   A=l*b;
}

void Area::print()
{
   cout<<"Area is : "<<A<<endl;
}

Area::~Area()
{
cout << "Object is being deleted" << endl;
}

int main()
{

   int l,b;
   Area a1; 
   a1.calc();  // default constructor is called.
   a1.print();
   cout<<"Enter length and breadth for parameterised constructor:\n";
   cin>>l>>b;
   
   Area a2(l,b); // parameterised constructor is called.
   a2.calc();
   a2.print();

   return 0;

}