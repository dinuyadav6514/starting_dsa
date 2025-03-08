#include<iostream>
using namespace std;

int main(){

    // ***** STRING INITIALIZATION *****

    // 1. Manual Null-termination:-
    char name[20] = {'D','I','N','U','\0'};
    for (int i = 0; i < 20; i++)
    {
        cout<<name[i];
    }

    // Implicit Null-termination :-
    char name2[20] = "DINU YADAV";
    cout<<endl<<name2;
    

    // Using the inbuilt string library :-
    string name3 = "Dinesh Yadav.";
    cout<<endl<<name3;

    // ***** TAKING STRING INPUT *****

    string name4;
    cout<<"Enter yout name : ";
    cin>>name4;
    cout<<"Got it "<<name4<<endl;

    // ***** STRING FUNCTIONS?OPERATIONS ******
    // 1. string length

    cout<<"Name 4 lenght = "<<name4.length();

    // 2. .assign()

    name4.assign("sbsjv");
    cout<<"The Updated name is : "<<name4<<endl;

    // 3.  .append() :-
    string name5 = name3.append(name4);
    cout<<"Conacted names :-"<<name5<<endl;

    // 4. .compare() :-
    string name6  = name3;
    cout<<name3.compare(name5);

    return 0;
}