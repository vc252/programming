#include <iostream>
using namespace std;

int main(void) {
    int n=5;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=2*n-i; j++) {
            if (j<=n-i) cout<<" ";
            else cout<<"*";
        }
        cout<<endl;
    }
    exit(EXIT_SUCCESS);
}