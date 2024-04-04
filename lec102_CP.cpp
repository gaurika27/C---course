#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string time;
        cin >> time;

        int hours, minutes;
        hours = stoi(time.substr(0, 2));
        minutes = stoi(time.substr(3));

        string period = (hours >= 12) ? "PM" : "AM";
        hours %= 12;
        if (hours == 0)
            hours = 12;

        cout << setfill('0') << setw(2) << hours << ":" << setw(2) << minutes << " " << period << endl;
    }

    return 0;
}
