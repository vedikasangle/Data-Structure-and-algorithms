#include <iostream>
#include <set>
using namespace std;

// set ->only unique element can be stored in a set
// implemented using bst
// element cannot be modified , only deleted or inserted
// elements returned in sorted order
// unordered set are fast that  ordered set

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    for(auto i : s){
        cout<<i<<endl;
    }cout<<endl;

    //erase
    set<int>::iterator it = s.begin();    //??????
    it++;

    s.erase(it);
       for(auto i : s){
        cout<<i<<endl;
    }

    //count -->tells if element is there or not in boolean 
    cout<<"is element present "<<s.count(5)<<endl;

    
    //find -> it returns the iterator  
    set <int> :: iterator itr = s.find(5);
    for(auto it = itr; it!=s.end(); it++){
        cout<<*it<<" ";
    }cout<<endl;

    //cout<<"value present at itr ->"<<*it<<endl; 
    //insert, find and erase and count ->complexity is o(logn)
    //size , begin ,end , empty ->o(1)
}