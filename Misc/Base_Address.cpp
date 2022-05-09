#include<iostream>
using namespace std;
int main()
{
    int m=0,n=0;
    cout<<"Enter the number of rows and columns: ";
    cin>>m>>n;
    int A[m][n]={0};
    //to accept elements in the array
    cout<<"Enter elements"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>A[i][j];
        }
    }
    //to display the elements
    cout<<"~~~~~~~~~~~~~~~~~~~~ Array ~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }
    //to display the address of (m-1, n-1)th element
    int B=0,w=0,lr=0,lc=0;
    int i=m-1,j=n-1;
    cout<<"Enter the Base address of the Array: ";
    cin>>B;
    cout<<"Enter the size of the elements: ";
    cin>>w;

    cout<<"The adress of ("<<(m-1)<<" ,"<<(n-1)<<")th element is "<<B+ w*(n*(i-lr)+(j-lc));

return 0;
}