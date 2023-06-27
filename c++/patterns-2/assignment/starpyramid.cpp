#include <iostream> 
using namespace std;

int main(void) {
    int n=5;
    
    for (int i=1; i<=n; i++) {
        //for blank part
        for (int j=1; j<=n+i-1; j++) {
            if (j<=n-i) {
                cout<<" ";
            } else {
                cout<<"*";
            }
        }
        cout<<"\n";
    }

    exit(EXIT_SUCCESS);
}