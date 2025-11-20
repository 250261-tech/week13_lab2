#include <iostream>
using namespace std;

int maxValue(int* ptrs[], int size) {
    int max=*ptrs[0];
    for (int i = 0; i < size; i++) {
        if (max<*ptrs[i]) {
            max=*ptrs[i];
        }
    }
    return max;

}

int main() {
    int n;
    cin>>n;
    int* arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new int;
        cin >> *arr[i];
    }
    cout << maxValue(arr, n);
    return 0;
}