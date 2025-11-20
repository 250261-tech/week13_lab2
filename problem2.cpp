#include <iostream>
using namespace std;

bool greaterThan10(int a) {
    return a>10;
}

int main() {
    int counter;
    counter=0;
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        int num;
        cin>>num;
        arr[i]=num;
    }
    //definition of function ptr
    bool (*fptr)(int)=greaterThan10;

    for (int i=0;i<n;i++) {

        if (fptr(arr[i])) {
            counter+= 1;
        }
    }
    cout<<counter;
    return 0;
}