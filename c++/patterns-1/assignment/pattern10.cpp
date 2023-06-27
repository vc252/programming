#include <iostream>
using namespace std;

int main(void) {
    int n=5;
    int limit;
    for (int i=1; i<=2*n-1; i++) {
        for( int j=1; j<=n; j++) {
            if ( (i<=n && j<=n-i) || (j<=i-n) ) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
    exit(EXIT_SUCCESS);
}