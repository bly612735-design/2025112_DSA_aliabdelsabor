user-defined functions are function that are created by the user
built-in functions are functions that are built-in in the comp language

 implementation in cpp:
built-in 
 #include <cmath>
 double result = sqrt(25);

user-defined
#include <iostream>
void sum(){
    int a,b;
    cout<<"enter the 2 numbers in order to get the sum"<<endl;
    cin>>a>>b;
    int add=a+b;
    cout<<"The sum is: "<<add;
}
int main(){
    sum();
    return 0;
}
