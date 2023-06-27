#include <iostream>
using namespace std;

int main(void) {
    int m=10,n=7;
    for (int i=1; i<=m; i++) {
        for (int j=1; j<=n; j++) {
            //for horizontal edges
            if (i==1 || i==m) cout<<"*";
            //for vertical edges
            else if (j==1 || j==n) cout<<"*";
            //the empty space between
            else cout<<" ";
        }
        cout<<endl;
    }
    exit(EXIT_SUCCESS);
}
