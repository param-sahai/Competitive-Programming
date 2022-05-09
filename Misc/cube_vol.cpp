#include<iostream>
using namespace std;
class Cube_Vol{
    int l,b,h;
    public:
    void getdata();
    void putdata();
    int Vol();
};
void Cube_Vol :: getdata()
{
    cout<<"Enter length, breadth and height: ";
    cin>>l>>b>>h;
}
void Cube_Vol :: putdata()
{
    cout<<"The length , breadth and the height entered is: "<<l<<" "<<b<<" "<<h<<endl;
}
int Cube_Vol :: Vol()
{
    return (l*b*h);
}
int Cube_Vol :: main()
{
  getdata();
  putdata();
  int k=Vol();
  cout<<k;

  return 0;

}