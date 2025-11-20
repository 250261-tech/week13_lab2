#include <iostream>
using namespace std;



double square(double x) {
    return x * x;
}

double cube(double x) {
    return x * x * x;
}


double apply(double x, double (*f)(double)) {
    return f(x);
}

int main() {
    double n;
    cin>>n;
    cout<<apply(n,square)<<" ";
    cout<<apply(n,cube)<<endl;
    return 0;
}