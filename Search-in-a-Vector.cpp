//
// Created by PC on 9/28/2025.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int number, target;
    bool found;
    vector<int> numbers;

    for (int i = 0; i < 5; i++) {
        cout << "please enter a number: ";
        cin >> number;
        numbers.push_back(number);
    }

    cout << "Please enter a target number: ";
    cin >> target;

    for (int i = 0; i < numbers.size(); i++) {
        if (numbers[i] == target) {
            found = true;
            break;
        }
    }

    if (found == true) {
        cout << "We found your number in the vector";
    } else {
        cout << "We didn't found your number in the vector";
    }

    return 0;
}