#include <iostream>
using namespace std;

void fib(int num) {
    int a = 0, b = 1, n;
    
    cout << "Fibonacci Series: ";
    for (int i = 0; i < num; i++) {
        if (i == 0) {
            cout << a << " ";
        }
        else if (i == 1) {
            cout << b << " ";
        }
        else {
            n = a + b;
            cout << n << " ";
            a = b;
            b = n;
        }
    }
    cout << endl;
}

int main() {
    int terms;
    cout << "Enter number of terms: ";
    cin >> terms;
    
    fib(terms); 
    
    return 0;
}