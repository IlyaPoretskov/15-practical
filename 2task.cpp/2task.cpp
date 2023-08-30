#include <iostream>
#include <vector>
#include "../functions.hpp"

using namespace std;

int main() {
    cout << "\nHow many elements will be in vector?\n";
    int n, res, first, second;
    cin >> n;
    while (n <= 0) 
    {
        cerr << "\n!!Incorrect input, please, try again!!\n";
        cin >> n;
    }

    vector<int> vec(n);

    cout << "\nPlease, input array elements: ";
    inputVector(vec);

    cout << "\n\nInput result value: ";
    cin >> res;
    while (res <= 0)
    {
        cerr << "\n!!Incorrect input, please, try again!!\n";
        cin >> res;        
    }
    
    two_results(vec, res, first, second);

    cout << "\n\nTwo numbers in array which equals to " << res << ": " << first << " | " << second << "\n\n";
    system("pause");
}