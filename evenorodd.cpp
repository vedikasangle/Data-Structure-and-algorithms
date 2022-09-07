#include<iostream>
using namespace std ;

//even - 1
//odd - 0 
bool isEven(int a){
    if(a%2 ==0){
        return 1; 
    }
    else{
        return 0 ; 
    }

}

int main (){
    int num; 
    cin>>num;

    if( isEven(num)){
        cout<<"Number is even"<<endl;
    }
    else{
        cout<<"number is odd"<<endl;
    }
}