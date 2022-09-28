#include<iostream>
#include<queue>
using namespace std ; 

//queue -> first in first out 

int main(){
    queue<string> q;

    q.push("vedika");
    q.push("sharad");
    q.push("sangle");

       cout<<"size before pop"<<q.size()<<endl;

    cout<<"first element"<<q.front()<<endl;
    q.pop();
    cout<<"first element"<<q.front()<<endl;

    cout<<"size after pop"<<q.size()<<endl;

}