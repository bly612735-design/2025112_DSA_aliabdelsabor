#include <iostream>
using namespace std;    
void message(string greet){
    cout<<"Enter a kinyarwanda greeting"<<endl;
    cin>>greet;
    cout<<greet;
}
int main(){
    string greet;
    message(greet);
    return 0;
}
//yes, a void can have parameters without needing to return anything