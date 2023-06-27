#include <iostream>
using namespace std;

//functions used
float power(int a,int b);

int main(void) {
    int a,b;
    cout<<"Enter the base: ";
    cin>>a;
    cout<<"Enter the powe: ";
    cin>>b;
    cout<<a<<" raised to the power "<<b<<" is: "<<power(a,b);
    exit(EXIT_SUCCESS);
}

//power: returns a raised to the power b
float power(int a,int b) {
    float ans=1;
    int c = b;
    if (b<0) {
        c = -b;
    }
    //multiplying a b times
    for ( int i=0; i<c; i++) {
        ans*=a;
    }
    //a^-b = 1/a^b
    if (b<0) return 1/ans;
    else return ans;
}