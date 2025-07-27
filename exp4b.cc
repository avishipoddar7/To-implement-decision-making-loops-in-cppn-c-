// exp 4 
// to set and revert specific bits of given numbers 

#include<iostream>
using namespace std ;

int main(){
    int a ;

    cout << "Enter first number a: ";
    cin >> a;

    int bit_set,reset;

    cout<<"Enter the bit you want to set: ";
    cin>>bit_set ;
    bit_set = a | (1<<bit_set);
    cout<<"your number after being set is  "<<bit_set<<endl;


    cout<<"Enter the bit you want to reset: ";
    cin>>reset ;
    reset = a & ( ~(1<<reset));
    cout<<"your number after being reset is  "<<reset<<endl;

    return 0 ;

      
}