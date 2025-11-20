#include <iostream>
using namespace std;

int add(int a,int b) {
   return a+b;
}
int sub(int a,int b) {
    return a-b;
}
int mul(int a,int b) {
    return a*b;

}

int main(){
    int (*funptr[3])(int,int)={add,sub,mul};

    int a,b,c;
    cin>>a>>b>>c;
    cout<<funptr[c](a,b)<<endl;
    return 0;


}


