#include <iostream>
using namespace std;

int main(void) {
    int n=5;
    for (int i=1; i<=n; i++) {
        for (int j=n; j>=i; j--) {
            cout<<"*";
        }
        cout<<endl;
    }
    //or no.of rows+no. of stars = n+1
    //   no. of stars = n+1-i  if no. of rows=i
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n+1-i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    exit(EXIT_SUCCESS);
}