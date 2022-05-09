#include <iostream>
using namespace std;
int size=0;
int *arr=new int[size];

void insertElement(int *arr, int n, int x, int pos)
{
    for (int i = n; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = x;
}

void deleteElement(int *arr, int n, int pos)
{
    for (int i = pos; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
}

void location(int *arr, int n, int x)
{
    int low = 0;
    int high = n - 1;
    int pos = -1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (x == arr[mid])
        {
            pos = mid;
            break;
        }
        else if (x > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    if (pos != -1)
    {
        cout << "Index of Given Element: " << pos << '\n';
        cout << "Position of Given element: " << pos + 1 << '\n';
    }
    else
    {
        cout << "Elements is not present in arrray\n";
    }
}

void display(int *arr, int n)
{
    for (int x = 0; x < n; x++)
    {
        cout << arr[x] << ' ';
    }
    cout << '\n';
}

int main()
{
    int N = 100; // max size of array
    int n;
    cout << "Enter size of array\n";
    cin >> size; // size of array input by the user
    n=size;
    cout << "Enter " << n << " Elements in array\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter 1 for Inserting an element at given position\n";
    cout << "Enter 2 for Deleting an element at given position\n";
    cout << "Enter 3 for finding location of given element\n";
    cout << "Enter 4 for displaying arrray elements\n";
    int ch;
    cin >> ch;

    switch (ch)
    {
    case 1:
        if (n != N)
        {
            cout << "Enter element and position to be inserted\n";
            int ele, pos;
            cin >> ele >> pos;
            insertElement(arr, n, ele, pos);
            cout << "array After inserting element is:\n";
            display(arr, n + 1);
        }
        else
        {
            cout << "No space in array to insert elements\n";
        }
        break;

    case 2:
        cout << "Enter position of array element to be deleted\n";
        int pos;
        cin >> pos;
        deleteElement(arr, n, pos);
        cout << "array elements after delete operation\n";
        display(arr, n - 1);
        break;

    case 3:
        cout << "Enter element whose location is to be found\n";
        int ele;
        cin >> ele;
        location(arr, n, ele);
        break;

    case 4:
        cout << "array Elements are:\n";
        display(arr, n);
        break;

    default:
        cout << "Invalid Input\n";
        break;
    }

    return 0;
}