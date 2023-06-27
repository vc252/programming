#include<iostream>
using namespace std;

//functions used
int factorial(int x);

int main(void) {
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"the factorial of "<<num<<"is : "<<factorial(num);
    exit(EXIT_SUCCESS);
}

//factorial: returns the factorial of the number x
int factorial(int x) {
    int fac = 1;
    for( int i=1; i<=x; i++) fac*=i;
    return fac;
}