//sum of series 1+2-3+4-6......till n
//we can do this by a for loop but the instead we should use the formula 

#include <iostream>
using namespace std;

int main(void) {
    int n;
    cout<<"Enter the number till which to calculate the series: ";
    cin>>n;
    if ( n%2==0 ) cout<<"sum is: "<<-n/2;
    else cout<<"sum is: "<<(1+n)/2;
    exit(EXIT_SUCCESS);
}