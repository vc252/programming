#include <bits\stdc++.h>
using namespace std;

int gcd(int n1,int n2);

int main(void) {
    cout<<"Enter first number: ";
    int num1;
    cin>>num1;
    cout<<"Enter second number: ";
    int num2;
    cin>>num2;
    int x = gcd(num1,num2);
    cout<<"greatest common divisor of "<<num1<<" and "<<num2<<" is: "<<x;
}

int gcd(int n1,int n2) {
    while (true) {
        if (n1>n2) n1 = n1%n2;
        else n2 = n2%n1;
        if (n1==0) return n2;
        if (n2==0) return n1;
    }
}