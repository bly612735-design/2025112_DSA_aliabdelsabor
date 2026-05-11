#include <iostream>
#include <vector>

using namespace std;

int main() {
    int chosenNumber = 7;
    int userGuess = 0;
    vector<int> attempts;

    while (userGuess != chosenNumber) {
        cout << "Enter a number: ";
        cin >> userGuess;
        
        attempts.push_back(userGuess);

        if (userGuess > chosenNumber) {
            cout << "Too high" << endl;
        } 
        else if (userGuess < chosenNumber) {
            cout << "Too low" << endl;
        } 
        else {
            cout << "Correct" << endl;
        }
    }

    for (int i = 0; i < attempts.size(); i++) {
        cout << attempts[i] << endl;
    }

    return 0;
}
