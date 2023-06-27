#include <iostream>
using namespace std;
//functions used
int reverse(int x);

int main(void) {
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"The reverse of "<<x<<" is: "<<reverse(x);
    exit(EXIT_SUCCESS);
}

//reverse: returns the reverse of the number x
int reverse(int x) {
    int rev=0;
    while (x!= 0) {
        rev = rev*10 + x%10;
        x/=10;
    }
    return rev;
}