#include <iostream>
#include <vector>
#include "../functions.hpp"

using namespace std;

int main() {
    vector<int> vec = {};
    int num = 0;
    while (num != -2) {
        num = 0;
        cout << "\nInput: ";
        while (num != -1 && num != -2) {
            cin >> num;

            while (num < 0 && num != -1 && num != -2) {
                cerr << "\n!!Incorrect input, please, try again!!\n";
                cin >> num;
            }

            if (num != -1 && num != -2) {
                vec.push_back(num);
            }
        }
        if (num == -1) {
            bubble_sort(vec);
            if (vec.size() > 5) {
                cout << "Output: " << vec[4];
            }
        }
    }
    cout << "\nArray: ";
    printVector(vec);
    cout << "\n";
    system("pause");
}