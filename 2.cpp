#include <iostream>
using namespace std;

int linearSearchCount(int arr[], int size, int item)
{
    int count = 0;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == item)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int size = 0;
    cin >> size;

    int* arr = new int[size];
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int item = 0;
    cin >> item;

    cout << linearSearchCount(arr, size, item);
}