#include <iostream>
using namespace std;

int main(void) {
    int n=10;
    int limit;
    for ( int i=1; i<=2*n-1; i++) {
        //for lower triangle
        if ( i>n ) limit = 2*n-i;
        //for upper triangle
        else limit = i;

        for ( int j=1; j<=limit; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    exit(EXIT_SUCCESS);
}