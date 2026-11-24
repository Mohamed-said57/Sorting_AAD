#include <iostream>
using namespace std;

int main() {
    int n, K;
    cin >> n >> K;

    int arr[n];
    int freq[K + 1] = {};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    for (int i = 0; i <= K; i++) {
        while (freq[i] > 0) {
            cout << i << " ";
            freq[i]--;
        }
    }

    return 0;
}
