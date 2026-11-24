#include <iostream>
using namespace std;

int Binary_Search_Index(int arr[], int l, int h, int item){
    int index = 0;
    while(l <= h){
        int m = (l + h) / 2;
        if(arr[m] == item){
            index = m;
            h = m - 1;
        }
        else if(arr[m] < item){
            l = m + 1;
        }
        else{
            h = m - 1;
        }
    }
    

    return (index)? index : -1;
}

int main()
{
    int size = 0;
    cin >> size;

    int* arr = new int[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    int item = 0;
    cin >> item;

    cout << Binary_Search_Index(arr, 0, size - 1, item);

    delete[] arr;
}