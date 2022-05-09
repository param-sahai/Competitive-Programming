#include<iostream>
using namespace std;


void InsertionSort(int *arr, int n)
{
    int i, k, j;
    for (i = 1; i < n; i++)
    {
        k = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > k)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = k;
    }
}
void printArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main(){
int size=0;
cout<<"Enter the size of the array"<<endl;
cin>>size;
int *arr=new int[size];

cout<<"Enter "<<size<<" elements"<<endl;
for(int i=0;i<size;i++){
    cin>>arr[i];
}
printArray(arr,size);
InsertionSort(arr,size);
printArray(arr,size);

return 0;
}