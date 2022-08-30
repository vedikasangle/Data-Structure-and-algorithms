#include <iostream>
using namespace std;

int main()
{
    cout << "Namaste Duniya :-)" << endl;
    int a = 123;
    cout << a << endl;
    int size1 = sizeof(a);
    cout << "Size of a is : " << size1 << endl;

    char b = 'v';
    cout << b << endl;
    int size2 = sizeof(b);
    cout << "Size of b is : " << size2 << endl;

    bool bl = true;
    cout << bl << endl;
    int size3 = sizeof(bl);
    cout << "Size of bl is : " << size3 << endl;
    
    float f = 1.2;
    cout << f << endl;
    int size4 = sizeof(f);
    cout << "Size of f is : " << size4 << endl;
    
    double d = 1.23;
    cout << d << endl;
    int size5 = sizeof(d);
    cout << "Size of d is : " << size5 << endl;

    //typecasting 
    int a = 'a';
    cout<<a<<endl;

    char ch = 98;
    cout<<ch <<endl;

    char ch1 = 123456;
    cout<<ch1<<endl;

    unsigned int a = 112;
    cout<<a<<endl;

    float a = 2.0/5;

    cout<<a<<endl; 
    cout<<2.0/5<<endl;

    int a = 2;
    int b = 3;
    bool first(a==b);
    cout<<first<<endl;

     bool second(a>b);
    cout<<second<<endl;

     bool third(a<b);
    cout<<third<<endl;

     bool fourth(a>=b);
    cout<<fourth<<endl;

    bool fifth(a<=b);
    cout<<fifth<<endl;

    bool sixth(a!=b);
    cout<<sixth<<endl;


    int v =0  ;
    cout<< !v  <<endl;

    


}
