#include <iostream>
using namespace std;

int* mergeSort(int arr1[], int arr2[], int size1, int size2, int result[]){
    int i = 0, j = 0, k = 0;
    while(i < size1 && j < size2){
        if(arr1[i] <= arr2[j]){
            result[k] = arr1[i];
            i++;
            k++;
        }
        else{
            result[k] = arr2[j];
            j++;
            k++;
        }
    }
    while(i < size1){
        result[k] = arr1[i];
        i++;
        k++;
    }
    while(i < size2){
        result[k] = arr2[j];
        j++;
        k++;
    }
    return result;
}

int main()
{
    int size1 = 0;
    int size2 = 0;
    cin >> size1 >> size2;

    int* arr1 = new int[size1];
    int* arr2 = new int[size2];
    int* result_arr = new int[size1 + size2];

    for(int i = 0; i < size1; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i < size2; i++){
        cin >> arr2[i];
    }

    result_arr = mergeSort(arr1, arr2, size1, size2, result_arr);
    for(int i = 0; i < size1 + size2; i++){
        cout << result_arr[i] << " ";
    }

    delete[] arr1;
    delete[] arr2;
    delete[] result_arr;
}