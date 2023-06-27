//printing the fibonacci series till n
//fib(n) = fib(n-1) + fib(n-2)    fib(1)=1 fib(0)=0
#include <iostream>
using namespace std;

//function used
void fibonacci(int x);

int main(void) {
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"the fibonacci series of "<<num<<" is: "<<endl;
    fibonacci(num);
    exit(EXIT_SUCCESS);
}

void fibonacci(int x) {
    int a=0;
    int b=1;
    for ( int i=0; i<x; i++) {
        if (i==0) {
            cout<<"0 ";
            continue;
        }
        if (i==1) {
            cout<<"1 ";
            continue;
        }
        int temp = b;
        b = b+a;
        cout<<b<<" ";
        a = temp;
    }
}