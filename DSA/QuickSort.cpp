#include<iostream>
using namespace std;

void printArray(int arr[], int i, int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int Partition(int arr[],int low,int high){
   
    int pivot=arr[low];
    int i=low+1;
    int j=high;

    int temp;
    do{
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<j){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }while(i<j);
    printArray(arr,0,5);

    temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;
}

void Quicksort(int arr[],int low,int high){
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
int *arr=new int[size];
cout<<"Enter "<<size<<" elements"<<endl;
for(int i=0;i<size;i++){
    cin>>arr[i];
}

int low=0,high=size-1;

printArray(arr,0,size);
Quicksort(arr,low,high);
printArray(arr,0,size);

return 0;
}
