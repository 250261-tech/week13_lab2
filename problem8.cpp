#include <iostream>
using namespace std;

int isEven(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}

int main() {
    int count=0;
    int n;
    cin>>n;
    int arr[n];
    int (*funcs[1])(int)={isEven};
    for (int i=0;i<n;i++) {
        int s;
        cin>>s;
        arr[i]=s;
    }
    for (int i=0;i<n;i++) {
        if (funcs[0](arr[i])==1) {
            count+=1;
        }
    }
    cout<<count;
    return 0;

}

