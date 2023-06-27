#include <iostream>
using namespace std;

int main(void) {
    int n=5;
    for ( int i=1; i<=n; i++) {
        int a = 1;
        int b = i-1;
        for ( int j=1; j<=n+i-1; j++) {
            if (j<=n-i) {
                cout<<" ";
            } else if (j<=n) {
                cout<<a++<<"";
            } else {
                cout<<b--<<"";
            }
        }
        cout<<"\n";
    }
    exit(EXIT_SUCCESS);
}