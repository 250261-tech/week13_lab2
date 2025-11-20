#include <iostream>
using namespace std;

void reverseArray(int* ptrs[], int size) {
    for (int i = 0; i < size / 2; i++) {
        int j = size - 1 - i;
        int* temp = ptrs[i];
        ptrs[i] = ptrs[j];
        ptrs[j] = temp;
    }

    for (int q = 0; q < size; q++) {
        cout<<*ptrs[q]<<" ";
    }

}


int main() {
    int n;
    cin>>n;
    int* arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int;
        cin>>*arr[i];
    }

    reverseArray(arr, n);
    return 0;
}