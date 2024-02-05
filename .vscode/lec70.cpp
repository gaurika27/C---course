#include <iostream>
#include <string>

using namespace std;

void bubbleSort(string &str) {
    int n = str.length();
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (str[j] > str[j + 1]) {
                swap(str[j], str[j + 1]);
                swapped = true;
            }
        }
        // If no swaps were made in this pass, the string is already sorted
        if (!swapped) {
            break;
        }
    }
}

int main() {
    string inputString;

    cout << "Enter a string: ";
    cin >> inputString;

    bubbleSort(inputString);

    cout << "Sorted string: " << inputString << endl;

    return 0;
}
