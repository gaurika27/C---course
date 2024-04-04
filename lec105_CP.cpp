// #include <iostream>
// #include <vector>
// #include <unordered_map>

// using namespace std;

// // Function to check if two songs are compatible (same writer or genre)
// bool isCompatible(const string& genre1, const string& writer1, const string& genre2, const string& writer2) {
//     return genre1 == genre2 || writer1 == writer2;
// }

// // Function to find the minimum number of removals using dynamic programming
// int minRemovals(const vector<string>& genres, const vector<string>& writers) {
//     int n = genres.size();

//     // dp[i][j] stores the minimum number of removals needed for an exciting playlist
//     // from songs i to n-1, considering the first j songs as the prefix
//     vector<vector<int>> dp(n, vector<int>(n, n));

//     // Base cases: single song or two compatible songs require no removals
//     for (int i = 0; i < n; ++i) {
//         dp[i][i] = 0;
//         if (i + 1 < n && isCompatible(genres[i], writers[i], genres[i + 1], writers[i + 1])) {
//             dp[i][i + 1] = 0;
//         }
//     }

//     // Build the DP table iteratively
//     for (int len = 3; len <= n; ++len) {
//         for (int i = 0; i <= n - len; ++i) {
//             int j = i + len - 1;
//             dp[i][j] = n;  // Initialize with worst-case scenario (remove all)
//             // Check if the last two songs are compatible
//             if (isCompatible(genres[j], writers[j], genres[j - 1], writers[j - 1])) {
//                 dp[i][j] = dp[i][j - 1];  // No removal needed for last two songs
//             } else {
//                 // Consider removing either the last song or the second-last song
//                 dp[i][j] = min(dp[i][j], 1 + min(dp[i][j - 1], dp[i + 1][j]));
//             }
//         }
//     }

//     return dp[0][n - 1];
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int n;
//         cin >> n;

//         vector<string> genres(n);
//         vector<string> writers(n);
//         for (int i = 0; i < n; ++i) {
//             cin >> genres[i] >> writers[i];
//         }

//         int minRem = minRemovals(genres, writers);
//         cout << minRem << endl;
//     }

//     return 0;
// }

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

int minRemovalsToExcitePlaylist(vector<pair<string, string>>& songs) {
    int n = songs.size();
    int minRemovals = n; // Initialize with the maximum possible removals

    // Try removing each song individually and find the minimum removals
    for (int i = 0; i < n; ++i) {
        int removals = 0;
        for (int j = 1; j < n; ++j) {
            if (j == i) continue; // Skip the removed song
            if (songs[j].first != songs[j - 1].first && songs[j].second != songs[j - 1].second) {
                // If both genre and writer are different, we need to remove one song
                removals++;
            }
        }
        minRemovals = min(minRemovals, removals);
    }

    return minRemovals;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<string, string>> songs(n);
        for (int i = 0; i < n; ++i) {
            cin >> songs[i].first >> songs[i].second;
        }

        int removals = minRemovalsToExcitePlaylist(songs);
        cout << removals << endl;
    }

    return 0;
}
