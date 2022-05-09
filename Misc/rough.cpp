#include <iostream>

using namespace std;

void f1()
{
    static int i=0;
    i++;
    cout<<"The function is called"<<i<<" times"<<endl;
}

int main()
{
 f1();
 f1();
return 0;

}