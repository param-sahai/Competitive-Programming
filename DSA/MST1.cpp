#include<iostream>
using namespace std;
int insertAfterIndex(int *arr,int i,int noe,int val){
    if(i==(noe-1)){
        arr[i+1]=val;
        return 1;
    }
    else if(i>=-1 && i<=(noe-1)){
        int k;
        for(k=noe-1;k>(i+1);k--){
            arr[k+1]=arr[k];
        }
        arr[k]=val;
        return 1;
    }
    else 
    return 0;
}
void PrintArray(int *arr,int noe){
    for(int i=0;i<noe;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int noe=0,val=0,index=0;
    cout<<"Enter the number of elements to be stored: ";
    cin>>noe;
    int *arr=new int[noe+1];
    cout<<"Enter "<<noe<<" elements"<<endl;
    for(int i=0;i<noe;i++){
        cin>>arr[i];
    }
    cout<<"The entered array is:"<<endl;
    PrintArray(arr,noe);
    cout<<"Enter a value to be inserted: ";
    cin>>val;
    cout<<"Enter index after which it is to be inserted: ";
    cin>>index;
    if(insertAfterIndex(arr,index,noe,val))
      cout<<"Element inserted successfully!"<<endl;
    else
     cout<<"Sorry value cannot be inserted!"<<endl;
    
    cout<<"The new array is:"<<endl;
    PrintArray(arr,noe+1);
return 0;
}