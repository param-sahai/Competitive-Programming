#include<iostream>

using namespace std;

int LinearSearch(int *arr,int n,int count){
    int pos=-1;
    for(int i=0;i<n;i++){
    count++;
    if(n==arr[i]){
        pos=i;
        break;
    }
}
cout<<"Comparisons done: "<<count<<endl;
return pos;
}

int BinarySearch(int *arr,int n,int count, int size){
    int lb=0, ub=size-1, mid=0, pos=-1;
    while(lb<=ub){
         mid= (lb+ub)/2;
         count++;
         if(n==arr[mid])
         {
             pos=mid;
             break;
         }
         else if(n<arr[mid]){
             ub=mid-1;
         }
         else if(n>arr[mid]){
             lb=mid+1;
         }
    }
    cout<<"Comparisons done: "<<count<<endl;
    return pos;
}
int main(){
int size=0,n=0, count=0;
int pos=-1;
//Accepting sizxe of the array
cout<<"Enter the size of the array"<<endl;
cin>>size;
//Creating array of size 'size'
int *arr=new int[size];
//Accepting elements for the array
cout<<"Enter the elements in the array:"<<endl;
for(int i=0;i<size;i++){
    cin>>arr[i];
}
//Accepting number to be searched
cout<<"Enter element to be searched in this array"<<endl;
cin>>n;

//function to perform Linear Search
// pos=LinearSearch(arr,n,count);

pos=BinarySearch(arr,n,count,size);

if(pos==-1)
cout<<"Number not found!! "<<endl;
else
cout<<"Number found at index "<<pos<<endl;

return 0;
}