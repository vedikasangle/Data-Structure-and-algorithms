#include<iostream>
#include<math.h>
using namespace std ; 

int main(){
    int a , b ;
    cout<<"enter a and b "<<endl;
    cin>>a;
    cin>>b;


    char op;
    cout<<"Enter the operation you want to perform"<<endl;
    cin>>op;

    switch (op){
        case '+' : cout<<a+b<<endl;
        break; 
         case '-' : cout<<a-b<<endl;
        break; 
         case '*' : cout<<a*b<<endl;
        break; 
         case '/' : cout<<a/b<<endl;
        break; 
         case '%' : cout<<a%b<<endl;
        break; 

        default : cout<<"pls enter a valid operation ";
     


    }


}