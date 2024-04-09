/*
 * INSTRUCTION:
 *     This is a C++ starting code for PART A.
 */

// Finish the head comment with Abstract, Name, and Date.
/*
 * Title: .cc
 * Abstract: Write the main purpose of the program.
 * Name: Write your name
 * Date: MM/DD/YYYY
 */

#include <iostream>
#include <vector>
using namespace std;

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void rearrangeArray(vector<int>& arr) {
    int i = 0;
    for (int j = 0; j < arr.size(); ++j) {
        if (arr[j] > 0) {
            if (i != j) {
                swap(arr[i], arr[j]);
            }

            ++i;
        }
    }
}

int main() {
    int n;

    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i <= n; ++i) {

        cin >> arr[i];
    }

    rearrangeArray(arr);

    for (int i = 0; i < n; ++i) {
        cout << arr[i+1] << " ";
    }
    cout << endl;

    return 0;
}
