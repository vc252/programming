#include <iostream> 
using namespace std;

int main(void) {
    int n=6;
    
    for (int i=1; i<=2*n-1; i++) {
        //for upper traingle 
        if (i<=n) {
            for (int j=1; j<=n+i-1; j++) {
                if (j<=n-i) {
                    cout<<" ";
                } else {
                    cout<<"*";
                }
            }
        } else {
            //for lower triangle
            for (int j=1; j<=3*n-i-1; j++) {
                if (j<=i-n) {
                    cout<<" ";
                } else {
                    cout<<"*";
                }
            }
        }
        cout<<"\n";
    }

    exit(EXIT_SUCCESS);
}