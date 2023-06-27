#include <iostream>
using namespace std;

int main(void) {
    int n=5;
    /*for (int i=1; i<=n/2; i++) {
        for (int j=1; j<=n/2; j++) {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }
    for (int i=1; i<=n; i++) {
        cout<<"*";
    }
    cout<<endl;
    for (int i=1; i<=n/2; i++) {
        for (int j=1; j<=n/2; j++) {
            cout<<" ";
        }
        cout<<"*"<<endl;
    }*/

    //the better way
    int mid = n/2 + 1;
    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            if (i==mid || j==mid) cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
    exit(EXIT_SUCCESS);
}