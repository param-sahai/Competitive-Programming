#include<iostream>
using namespace std;

void printArray(float arr[], int i, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int Partition(float arr[],int low,int high){
   
    float pivot=arr[low];
    int i=low+1;
    int j=high;

    float temp;
    do{
        while(arr[i]>=pivot){
            i++;
        }
        while(arr[j]<pivot){
            j--;
        }
        if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }while(i<j);

    temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;

    return j;
}

void Quicksort(float arr[],int low,int high){
    int PI;

    if(low<high){
        PI=Partition(arr,low,high);
        Quicksort(arr,low,PI-1);
        Quicksort(arr,PI+1,high);
    }
}


int main(){
int size;
cout<<"Enter the size of an array to be sorted!"<<endl;
cin>>size;
float *arr=new float[size];
cout<<"Enter "<<size<<" elements"<<endl;
for(int i=0;i<size;i++){
    cin>>arr[i];
}

int low=0,high=size-1;
cout<<endl;
cout<<"Original Array"<<endl;
printArray(arr,0,size);
Quicksort(arr,low,high);
cout<<endl;
cout<<"Sorted Array in Descending order"<<endl;
printArray(arr,0,size);

return 0;
}
