#include <iostream>
using namespace std;

int main(void) {
    int n=8;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=2*n-1; j++) {
            if ( j<=i ) {
                cout<<j<<" ";
            } else if( 2*n-j < i ) {
                cout<<2*n-j<<" ";
            } else {
                cout<<i<<" ";
            }
        }
        cout<<"\n";
    }
    for (int i=1; i<n; i++) {
        for (int j=1; j<=2*n-1; j++) {
            if ( j<=n-i ) {
                cout<<j<<" ";
            } else if( 2*n-j < n-i ) {
                cout<<2*n-j<<" ";
            } else {
                cout<<n-i<<" ";
            }
        }
        cout<<"\n";
    }

    exit(EXIT_SUCCESS);
}