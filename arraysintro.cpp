#include<iostream>
using namespace std ; 



int main(){
    //declare 
    int number[15];

    //accessing an array
    cout<<"value at 0 index"<<number[15]<<endl;
    

    //initialize
    int second[3] = {5,7,11};

    cout<<"the value of 2 element"<<second[2]<<endl;;


    int third[15] = {2,7};
    int n = 15 ; 

    //print the array 
    cout<<"Printing the array"<<endl ;
    for(int i = 0 ; i <n ; i++){
        cout<<third[i]<<" ";
    }

    return 0 ; 
}