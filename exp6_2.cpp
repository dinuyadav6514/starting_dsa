// 2. Insertion Sort:- +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++

#include <iostream>
using namespace std;

void swaap(int a, int b, int *array)
{
    int temp = array[b];
    array[b] = array[a];
    array[a] = temp;
}

void insertionsort(int *arri, int size)
{
    for (int j = 0; j < size; j++)
    {
        int minindex = j;
        for (int i = minindex + 1; i < size; i++)
        {
            if (arri[i] < arri[minindex])
            {
                minindex = i;
            }
        }
        if (minindex != j)
        {
            swaap(j, minindex, arri);
        }
    }
}

int main()
{
    int n;
    cout << "Enter the no. of elements in array:-";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element : ";
        cin >> arr[i];
    }
    cout << "Array before sorting is:- [";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << "]" << endl;

    insertionsort(arr, n);

    cout << "Array after selection sort is:- [";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << "]";

    // insertion sort :-

    insertionsort(arr, n);

    return 0;
}