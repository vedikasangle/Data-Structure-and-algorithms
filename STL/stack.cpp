#include<iostream>
#include<stack>
using namespace std ; 


//stack -->last in first out 

int main(){
    stack<string> s ; 
    s.push("vedika");
    s.push("sharad");
    s.push("sangle");

    cout<<"top element "<<s.top()<<endl;

    s.pop();
        cout<<"top element "<<s.top()<<endl;

    //to check size
    cout<<"size of stack"<<s.size()<<endl;

    //to check empty or not -->answer in boolean
    cout<<"empty or not"<<s.empty()<<endl;


 



}