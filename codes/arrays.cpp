#include<iostream>
using namespace std;

void definearray(int n , int* arr){
    for(int i = 0 ; i<n ; i++){
        switch (i+1)
        {
        case 1 :
            cout<<"Enter 1st element :";
            cin>>arr[i];
            break;
        
        case 2 :
            cout<<"Enter 2nd element :";
            cin>>arr[i];
            break;

        case 3 :
            cout<<"Enter 3rd element :";
            cin>>arr[i];
            break;

        
        default:
            if(i+1>=4){
                cout<<"Enter "<<i+1<<"th element :";
                cin>>arr[i];
                break;
            }
            break;
        }
    }
}

void traversal(int n , int* arr){
    cout<<"[";
    for(int i = 0 ; i<n ; i++){
        if(i<n-1){
            cout<<arr[i]<<",";
        }
        else{
            cout<<arr[i];
        }
    }
    cout<<"]"<<endl;
}

void endinsertion(int &n ,int* &arr){
    int* newarr = new int[n+1];
    int x;
    cout<<"Enter the number to add at End :";
    cin>>x;
    for(int i = 0 ; i<n ; i++){
        newarr[i] = arr[i];
    }
    newarr[n] = x;
    n++;

    delete[] arr;
    arr = newarr;
}

void startinsertion(int &n , int* &arr){
    int x;
    cout<<"Enter the number to add at Begining :";
    cin>>x;

    n = n+1;
    int* newarr = new int[n];

    for(int i = 0 ; i<n ; i++){
        newarr[i+1] = arr[i];
    }
    newarr[0] = x;

    delete[] arr;
    arr = newarr;
}



int main(){

    // *********** CH1 ARRAYS ****************************************************************
    int n;
    cout<<"Enter the number of elements in array :";
    cin>>n;

    int* arr = new int[n];

    //definig Array :
    definearray(n,arr);

    int select;
    cout<<"Enter Operation :"<<endl <<endl<<"1 -> traversal."<<endl<<"2 -> End INSERTION."<<endl<<"3 -> Begining INSERTION."<<endl<<"4 -> Any INSERTION."<<endl<<"0 -> excape"<<endl;
    cin>>select;

    switch (select){
    case 1:
        //Array Traversal :-
        traversal(n , arr);
        break;
    
    case 2:
        //Insertion at End :-
        endinsertion(n , arr);
        traversal(n,arr);
        break;

    case 3:
        //Insertion in begining :-
        startinsertion(n , arr);
        traversal(n , arr);
        break;
    
    default:
        break;
    }



    delete[] arr;
    return 0;
}