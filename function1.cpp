#include<iostream>

using namespace std ; 

int power(int a, int b){
    int ans = 1 ; 
    for(int i = 1; i<=b; i++){
        ans = ans *a;
    }
    return ans; 
}

int main(){
    int a , b ;
    cin>>a>>b;

    int ans1 = power(a,b);
    cout<<"the answer is "<<ans1<<endl;


    return 0 ; 
}