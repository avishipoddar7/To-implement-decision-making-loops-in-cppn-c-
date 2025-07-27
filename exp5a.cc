// exp 5 
// to check wheather number is even or odd 

#include <iostream>
using namespace std;

int main(){
    int number ;
   
    cout<<"Enter a number"<<endl; 
    cin>>number ;
     if (number % 2==0){
        cout<<number<<" is Even. "<<endl;
     } else {
        cout<<number<<" is Odd. "<<endl;
     }
     return 0;


}
