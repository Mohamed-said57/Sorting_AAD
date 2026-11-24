#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++)
    {
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

int main() {
    int n, P;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cin >> P;

    int pivotIndex;
    for(int i = 0; i < n; i++){
        if(arr[i] == P){
            pivotIndex = i;
        }
    }

    swap(arr[pivotIndex], arr[n - 1]);

    int p = partition(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl << p;

    return 0;
}