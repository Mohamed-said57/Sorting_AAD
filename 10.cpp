#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    int freq[101] = {};

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
    }

    int count = 0;
    int index = 0;

    for (int h = 1; h <= 100; h++) {
        while (freq[h] > 0) {
            if (arr[index] != h)
                count++;
                
            index++;
            freq[h]--;
        }
    }

    cout << count;
    return 0;
}