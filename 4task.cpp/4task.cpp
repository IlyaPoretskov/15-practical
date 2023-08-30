#include <iostream>
#include <vector>
#include "../functions.hpp"

using namespace std;

int main() {
    int n;
    cout << "How many elements will be array in array?\n";
    cin >> n;

    while (n <= 0)
    {
        cerr << "\n!!Incorrect input, please try again!!\n";
        cin >> n;
    }

    vector<int> vec(n);

    cout << "\nPlease, input array: ";
    inputVector(vec);
    modbubblesort(vec);

    cout << "\nSorted by module: ";
    printVector(vec);
    cout << "\n";

    system("pause");
    return 0;
}