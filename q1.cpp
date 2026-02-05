//binary search

#include <iostream>
using namespace std;

int binarySearch(int arr[], int l, int h, int key) {
    if (l > h) {
        return -1;
    }

    int mid = (l + h) / 2;

    if (arr[mid] == key)
        return mid;
    else if (key < arr[mid])
        return binarySearch(arr, l, mid - 1, key);
    else
        return binarySearch(arr, mid + 1, h, key);
}

int main() {
    int arr[] = {2,5,8,12,16,23,38,56,72,91};
    int l = 0;
    int h = (sizeof(arr) / sizeof(arr[0])) - 1;
    int key = 23;

    int result = binarySearch(arr, l,
