#include <iostream>
using namespace std;

int main() {
    int arr[5]={1,2,3,4,5};
    int* ptrarr[5];
    for (int i=4;i>-1;i--) {
        ptrarr[i]=&(arr[i]);
        cout<<*ptrarr[i]<<" ";
    }

    return 0;
}