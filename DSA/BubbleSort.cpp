#include<iostream>
using namespace std;

void BubbleSort(int *arr,int size){
    int comp=0,flag=0;
for(int j=0;j<size-1;j++){
cout<<"Pass "<<j+1<<endl;
flag=0;
    for(int i=0;i<size-1-j;i++){

        if(arr[i]>arr[i+1])
        {
            comp++;
            flag=1;
            int temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
    if(flag==0){                //making it adaptive
        break;                  //i.e if the given array is sorted already
    }                           //then it wont check again and again    
}
cout<<"Swaps done "<<comp<<endl;
}
int main(){
int size=0;
cout<<"Enter number of elements to be stored"<<endl;
cin>>size;
int *arr=new int[size];

cout<<"Enter "<<size<<" elements"<<endl;
for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
BubbleSort(arr,size);
cout<<"Sorted array elements"<<endl;
for(int i=0;i<size;i++)
{
    cout<<arr[i]<<" ";
}
return 0;
}