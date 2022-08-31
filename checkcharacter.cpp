#include<iostream>
using namespace std ; 

int main (){
    char ch ;
    cout<<"Enter the character"<<endl;
    cin>>ch; 
    if(ch>=65&&ch<=90){
        cout<<"Character is upper case";
    }
    else if(ch>=97&&ch<=122){
        cout<<"Characters is lower case ";
    }
    else if(ch>=48&&ch<=57){
        cout<<"Character is Numeric";
    }
     
}