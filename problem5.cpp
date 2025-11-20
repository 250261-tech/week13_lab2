#include <iostream>
using namespace std;

void increment(int* ptrs[], int size) {
    for (int i = 0; i < size; i++) {
        if (*ptrs[i] % 2!= 0) {
            *ptrs[i] = *ptrs[i] + 1;
        }
    }
    for (int i = 0; i < size; i++) {
        cout << *ptrs[i]<<" ";

    }

}

int main() {
    int n;
    cin>>n;
    int* arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int;
        cin >> *arr[i];
    }
    increment(arr, n);
    return 0;
}