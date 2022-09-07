#include<iostream>
using namespace std ;

 int factorial(int m ){
    int fact = 1 ; 
    for (int i = 1 ; i <=m ; i++){
        fact = fact * i ;
    }
    return fact ; 
 }   

 int nCr(int n , int r ){
    int numerator = factorial(n);
    int denominator = factorial(r) * factorial(n-r);
    int ans = numerator/denominator;
    return ans ; 
    }

int main (){
    int n , r ; 
    cin>>n>>r;

    cout<<"answer is "<<nCr(n , r)<<endl;
  
}