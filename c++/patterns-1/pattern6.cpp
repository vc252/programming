#include <iostream>
using namespace std;

int main(void) {
    int n=4;
    int c=1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=i; j++) {
            if ( (i+j)%2 == 0 ) {
                cout<<1<<" ";
            } else {
                cout<<0<<" ";
            }
        }
        cout<<endl;
    }
    exit(EXIT_SUCCESS);
}