#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void printVector(vector<int> vec);
void inputVector(vector<int>& vec);
void maxgap(vector<int> vec, int& first, int& second);
void modbubblesort(vector<int>& vec);
void two_results(vector<int> vec, int res, int& first, int& second);
void bubble_sort(vector<int>& vec);

void printVector(vector<int> vec) {
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << "\n";
}

void inputVector(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++)
    {
        cin >> vec[i];
    }
}

void maxgap(vector<int> vec, int& first, int& second) {
    int maxsum = vec[0];

    for (int i = 0; i < vec.size(); i++) 
    {
        for (int j = i; j < vec.size(); j++) 
        {
            int count = 0;

            for (int k = i; k <= j; k++) 
            {
                count += vec[k];
            }

            if (count > maxsum) 
            {
                maxsum = count;
                first = i;
                second = j;
            }
        }
    }
}

void modbubblesort(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec.size() - i - 1; j++) {
            if (abs(vec[j]) > abs(vec[j + 1])) {
                int tmp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = tmp;
            }
        }
    }
}

void two_results(vector<int> vec, int res, int& first, int& second) {
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size(); j++)
        {
            if (vec[i] + vec[j] == res)
            {
                first = vec[i];
                second = vec[j];
                return;
            }
        }
    }
}

void bubble_sort(vector<int>& vec) {
    for (int i = 0; i < vec.size(); i++)
    {
        for (int j = 0; j < vec.size() - i - 1; j++)
        {
            if (vec[j] > vec[j + 1]) {
                int temp = vec[j];
                vec[j] = vec[j + 1];
                vec[j + 1] = temp; 
            }
        }
    }
}