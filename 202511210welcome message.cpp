#include <iostream>
using namespace std;

void congrats() {
    cout<<"Enter user name:"<<endl;
    string name;
    cin>>name;
    cout<<"Congraturations "<<name<<endl;
}
 int main() {
    congrats();
    return 0;
 }