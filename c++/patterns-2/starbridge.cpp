#include <iostream>
using namespace std;

int main(void) {
    int n=5;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=2*n-1; j++) {
            if (j>=n-i+2 && j<=n+i-2) {
                cout<<" ";
            } else {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    exit(EXIT_SUCCESS);
}