#include <iostream>
using namespace std;
#define n 5

int main(void) {
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=2*i-1; j+=2) {
            cout<<j;
        }
        cout<<endl;
    }
    exit(EXIT_SUCCESS);
}