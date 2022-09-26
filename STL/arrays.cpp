#include<iostream>
#include<array>
using namespace std ; 

int main(){
    int basic[3] = {1,2,3};
    array<int,4> a = {1,2,3,4};  

    //size
    int size = a.size();
    for(int i = 0 ; i <size ; i++){
        cout<<a[i]<<endl;
    }

    //at and empty operation
    cout<<"Element at 2nd Index -> "<<a.at(2)<<endl;
    cout<<"Empty or not -> "<<a.empty()<<endl;

    //front and bakc operation for finding the first and last element
    cout<<"First Element -> "<<a.front();
    cout<<"Last Element -> "<<a.back();
    }