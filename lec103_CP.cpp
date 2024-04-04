#include <bits\stdc++.h>
#include <vector>

using namespace std;

// Function to check if a number is a binary decimal
bool isBinaryDecimal(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0 && digit != 1)
            return false;
        num /= 10;
    }
    return true;
}

// Function to factorize a number
vector<int> factorize(int n) {
    vector<int> factors;
    for (int i = 2; i * i <= n; ++i) {
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }
    }
    if (n > 1)
        factors.push_back(n);
    return factors;
}

// Function to solve the problem
string canRepresentAsBinaryDecimals(int n) {
    if (n == 1 || n == 0 || isBinaryDecimal(n))
        return "YES";

    vector<int> factors = factorize(n);
    for (int factor : factors) {
        if (!isBinaryDecimal(factor))
            return "NO";
    }
    return "YES";
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        cout << canRepresentAsBinaryDecimals(n) << endl;
    }

    return 0;
}
