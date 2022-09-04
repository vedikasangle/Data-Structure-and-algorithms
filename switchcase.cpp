#include<iostream>
#include<math.h>
using namespace std ; 

int main(){
     char ch = 'c ' ; 
     cout<<endl;
     switch(ch){
        case 1 : cout<<"First"<<endl;
        break;
        case '1' : cout<<"Second character"<<endl;
        break;

        //default not mandatory
        default : cout<<"It is Default case"<<endl; 
     }
}