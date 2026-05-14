#include <iostream>
using namespace std;
void sum() {
    float a,b,c,d;
    cout<<"Enter 4 numbers:"<<endl;
    cin>>a>>b>>c>>d;
    float add=a+b+c+d;
    cout<<"Sum: "<<add<<endl;
}
int main(){
    sum();
    return 0;
}