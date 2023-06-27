#include <bits/stdc++.h>
using namespace std;

//functions used
int digiCount(int x);
int digiCount2(int N);

int main(void) {
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    cout<<"The number of digits in "<<x<<" are: "<<digiCount2(x);
    exit(EXIT_SUCCESS);
}

//digiCount: returns the count of digits in a number x
//time complexity of logn(base 10) where n is the number whose digit needs to be counted
int digiCount(int x) {
    int count =0;
    if (x==0) {
        return 1;
    }
    while (x!= 0) {
        count++;
        x /= 10;
    }
    return count;
}
//time complexity is constant 
int digiCount2(int N) {
    return (int)(log10(N)+1);
}