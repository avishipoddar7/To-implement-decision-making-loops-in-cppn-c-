//experiment 2 

#include <iostream>
#include <string>
using namespace std;

int main (){
    int a;
    cout<<"Enter any integer: ";
    cin>>a;
    cout<<"Integer =  "<<a<<" and size is "<<sizeof(a)<<" bytes"<<endl;

    float b;
    cout<<"Enter a number with a decimal : ";
    cin>>b;
    cout<<"Number with decimal = "<<b<<" and size is "<<sizeof(b)<<" bytes"<<endl;

    string c;
    cout<<"Enter any word : ";
    cin>>c;
    cout<<"String = "<<c<< " and size is "<<sizeof(c)<<" bytes"<<endl;

    double d;
    cout<<"Enter a number with bigger decimal :  " ;
    cin>>d;
    cout<<"Bigger decimal = "<<d<< " and size is "<<sizeof(d)<<" bytes"<<endl;
    return 0;
    

}