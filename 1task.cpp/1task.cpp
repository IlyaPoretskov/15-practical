#include <iostream>
#include <vector>
#include "../functions.hpp"

using namespace std;


int main() {
    int c, firstInd = 0, secondInd = 0;

    cout << "\nHow many elements will be in array?\n";
    cin >> c;

    while (c <= 0) {
        cerr << "\n!!Incorrect input, try again!!\n";
        cin >> c;
    }

    vector<int> vec(c);

    cout << "\nInput array elements: ";
    inputVector(vec);

    maxgap(vec, firstInd, secondInd); 
    
    cout << "Result: " << firstInd << " | " << secondInd << "\n\n";
    system("pause");
    return 0;
}

