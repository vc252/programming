#include <iostream>
using namespace std;

//functions used
int sumDigit(int x);

int main(void) {
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"The sum of digits of "<<x<<" is: "<<sumDigit(x);
    exit(EXIT_SUCCESS);
}

//sumDigit: returns the sum of digits of the number x
int sumDigit(int x) {
    int sum = 0;
    while(x!= 0) {
        sum += x%10;
        x /= 10;
    }
    return sum;
}