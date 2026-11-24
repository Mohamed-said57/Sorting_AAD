#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r){
    int i, j, k;

    int n1 = m - l + 1; // first subarray size
    int n2 = r - m;     // second subarray size

    int* left_arr = new int[n1];
    int* right_arr = new int[n2];

    for(int i = 0; i < n1; i++){
        left_arr[i] = arr[l + i];
    }
    for(int j = 0; j < n2; j++){
        right_arr[j] = arr[m + 1 + j];
    }

    i = 0;
    j = 0;
    k = l;

    while(i < n1 && j < n2){
        if(left_arr[i] <= right_arr[j]){
            arr[k] = left_arr[i];
            i++;
        }
        else{
            arr[k] = right_arr[j];
            j++;
        }
        k++;
    }
    while(i < n1){
        arr[k] = left_arr[i];
        i++;
        k++;
    }
    while(j < n2){
        arr[k] = right_arr[j];
        j++;
        k++;
    }

    delete[] left_arr;
    delete[] right_arr;
    
}

void mergeSort(int arr[], int l, int r){
    if(l < r){
        int m = (l + r) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);

        merge(arr, l, m, r);
    }
}

int main()
{
    int size = 0;
    cin >> size;

    int* arr = new int[size];

    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    mergeSort(arr, 0, size-1);

    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }

    delete[] arr;
}
