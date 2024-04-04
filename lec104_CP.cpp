// #include <iostream>
// #include <string>

// using namespace std;

// void generateCheckerboard(int n) {
//     for (int i = 0; i < 2 * n; ++i) {
//         for (int j = 0; j < 2 * n; ++j) {
//             if ((i + j) % 2 == 0 /*|| (i-j)==1 || (i-j)==-1 */ ) {
//                 cout << "#";
//             } else {
//                 cout << ".";
//             }
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         generateCheckerboard(n);
//     }

//     return 0;
// }
// #include <iostream>

// using namespace std;

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         // Loop through rows
//         for (int i = 0; i < 2 * n; ++i) {
//             // Loop through columns
//             for (int j = 0; j < 2 * n; ++j) {
//                 // Alternate characters based on the combined row and column parity
//                 char symbol = (i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1) ? '#' : '.';
//                 cout << symbol;
//             }
//             cout << endl; // New line after each row
//         }
//     }

//     return 0;
// }
#include <iostream>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        // Loop through rows (outer loop)
        for (int i = 0; i < 2 * n; ++i) {
            // Flag to determine when to switch characters within a row
            bool switchChar = false;

            // Loop through all columns
            for (int j = 0; j < 2 * n; ++j) {
                // Alternate characters based on the combined row and column parity
                // with an additional check for switching within a row
                char symbol = ((i+j)%2==0) || (i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1) || switchChar ? '#' : '.';

                // Print the symbol without trailing spaces
                cout << symbol;

                // Switch character for the second half of the row
                if (j == n - 1) {
                    switchChar = true;
                }
            }

            // New line after each row (with no extra spaces)
            cout << endl;
        }

        // Add an extra empty line between test cases (if applicable)
        if (t > 0) {
            cout << endl;  // Only print empty line if more test cases remain
        }
    }

    return 0;
}
