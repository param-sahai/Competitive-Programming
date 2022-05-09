#include <iostream>
using namespace std;
int *arr=new int[100];

    void inputArray(int arr[], int noe)
    {
     cout << "Enter the value of elements" << endl;
     for (int i = 0; i < noe; i++) {
       cin >> arr[i];
     }
    }

    void insertElement(int arr[], int noe, int x, int n)
    {
        cout << "Enter the value of the element you want to insert: "
        << endl;
        cin >> n;
        cout << "Enter the position: " << endl;
        cin >> x;
        for (int i = noe - 1; i >= x; i--) {
        arr[i + 1] = arr[i];
        }
        arr[x] = n;
    }

    void deleteElement(int arr[], int noe, int n)
    {
        cout << "Enter the position of the element you want to delete: "<< endl;
        cin >> n;
        if(n>noe || n<0)
        {
            cout<<"Invalid position!"<<endl;
        }
        else{
            for (int i = n; i < noe - 1; i++) {
            arr[i] = arr[i + 1];
            }
        }
    }

    void display(int arr[], int noe)
    {
        for (int i = 0; i < noe; i++) {
        cout << arr[i] << " ";
        }
    }

int main()
{
    int n=0, x=0, noe=0, end;
    

    cout << "Enter the number of elements you want to enter: " <<endl;
    cin >> noe;

    inputArray(arr, noe);
    
    cout << "Original array: ";
    display(arr, noe);
    cout << endl;

    insertElement(arr, noe, x, n);
    cout << "Array after the insertion of value: ";
    noe = noe + 1;
    display(arr, noe);
    cout << endl;

    deleteElement(arr, noe, n);
    cout << "Array after the deletion of value: ";
    noe = noe - 1;
    display(arr, noe);
    cout << endl;

return 0;
}