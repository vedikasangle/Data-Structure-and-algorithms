// #include<iostream>
// using namespace std ; 


// //greatest commom factor
// int gcd(int a , int b){
//     if(a==0)
//     return b ;

//     if(b==0)
//     return a;

//     while( a!=b ){
//         if(a<b){
//             a=a-b;
//         }
//         else{
//             b = b-a;
//         }
//     }
//     return a ; 
// }

// int main(){
//     int a,b ;
//     cout<<"enter the values of a and b "<<endl;
//     cin>>a>>b;

//     int ans = gcd(a,b);

//     cout<<"The GCD of "<<a<<"&"<<b<<" is: "<<ans<<endl;

//     return 0 ; 
// }

#include <iostream>  
using namespace std;  
  
int gcd(int a, int b) // The function runs recursive in nature to return GCD  
{  
   
    if (a == 0) // If a becomes zero  
       return b; // b is the GCD   
    if (b == 0)// If b becomes zero  
       return a;// a is the GCD   
    
     
    if (a == b) // The case of equal numbers   
        return a; // return any one of them   
    
   // Apply case of substraction   
    if (a > b) // if a is greater subtract b   
        return gcd(a-b, b);  
    return gcd(a, b-a); //otherwise subtract a   
}  
    
  
int main()  
{  
    int a , b;
    cin>>a>>b;  
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);  
    return 0;  
}  