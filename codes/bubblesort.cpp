#include<iostream>
using namespace std;

int definearray(int x , int *array){
    // function to createan array.
    for(int i=0 ; i < x ;i++){
        cout<<"Enter "<<i+1<<"th element :";
        cin>>array[i];
    }
    return 0;
}

void printarray(int x , int *arr){
    // function to print an array
    cout<<"{";
    for(int i = 0 ; i<x ; i++){
        if(i < x-1){
            cout<<arr[i]<<",";
        }else{
            cout<<arr[i];
        }
    }
    cout<<"}"<<endl;
}

void bubblesort(int x , int *arr){
    // Bubble sort function
    for(int i = 0 ; i<x-1 ; i++){
        for(int j = 0 ; j<x-1-i ; j++){
            if(arr[j] >= arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            else{
                continue;
            }
        }
    }
}

void copypaste(int x, int *arr1 , int *arr2){
    for(int i = 0 ; i<x ; i++){
        arr2[i] = arr1[i];
    }
}



int main(){
    int n;
    cout<<"Enter no of elements in array :";
    cin>>n;
    int* original_arr = new int[n];
    definearray(n, original_arr);
    cout<<"Enterd array :";
    printarray(n, original_arr);

    // redefining array for bubblesort
    int* bsort_arr = new int[n];
    copypaste(n, original_arr , bsort_arr);
    
    //bubblesorting
    bubblesort(n , bsort_arr);
    cout<<"Bubble sorted array :";
    printarray(n,bsort_arr);


    delete[] original_arr;
    delete[] bsort_arr;


    return 0;
}