#include <iostream>
using namespace std;

double square(double x) {
    return x * x;
}

double cube(double x) {
    return x * x * x;
}

int main () {
    double (*squareptr)(double)=square;
    double (*cubeptr)(double)=cube;
    double (*funcs[2])(double)={squareptr,cubeptr};
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        cout<<funcs[i](n)<<" ";
    }
    return 0;
}