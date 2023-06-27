#include<iostream>
using namespace std;

//functions used
bool primecheck(int x);

int main(void) {
    int x;
    cout<<"Enter number: ";
    cin>>x;
    if ( primecheck(x) ) {
        cout<<"the number is prime.";
    } else {
        cout<<"the number is composite";
    }
    exit(EXIT_SUCCESS);
}

//primecheck: returns true if a number x is prime 
bool primecheck(int x) {
    if (x==2) {
        return true;
    }
    //1 is not considered a prime number
    if (x==1 || x%2==0) {
        return false;
    }
    //checking the multiplicity till the root of x
    for (int i=3; (i*i)<= x; i+=2) {
        if (x%i == 0) {
            return false;
        }
    }
    return true;
}