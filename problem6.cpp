#include <iostream>
using namespace std;

double average(double* ptrs[], int size) {
    double sum = 0.0;
    for (int i = 0; i < size; i++) {
        sum += *ptrs[i];
    }
    double average = sum / double(size);
    return average;

}


int main() {
    int n;
    cin>>n;
    double* ptrs[n];
    for (int i = 0; i < n; i++) {
        ptrs[i] = new double[n];
        cin>>*ptrs[i];
    }
    cout << average(ptrs, n) << endl;
    return 0;
}