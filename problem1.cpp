#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

int main() {
    int a,b;
    cin>>a>>b;
    int (*fptr)(int, int ) = add;
    cout<<fptr(a,b);
}