//1. selection sort : -++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++ ++

#include <iostream>
using namespace std;

void swaap(int a, int b, int *array)
{
    int temp = array[b];
    array[b] = array[a];
    array[a] = temp;
}

void selectionsort(int *arrm, int sizem)
{
    for (int i = 0; i < sizem; i++)
    {
        int minindex = i;
        for (int j = i + 1; j < sizem; j++)
        {
            if (arrm[minindex] > arrm[j])
            {
                minindex = j;
            }
        }
        if (minindex != i)
        {
            swaap(i, minindex, arrm);
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

    selectionsort(arr, n);

    cout << "Array after selection sort is:- [";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ",";
    }
    cout << "]";

    return 0;
}