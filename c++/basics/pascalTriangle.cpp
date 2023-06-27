#include <iostream>
using namespace std;

//functions used
int combination(int n,int r);
int fact(int x);
void pascal(int n);
void pascal(int n);

int main(void) {
    pascal(4);
    exit(EXIT_SUCCESS);
}

int fact(int x) {
    int f=1;
    for (int i=x; i>1; i--) {
        f*=i;
    }
    return f;
}

int combination(int n,int r) {
    int c = fact(n) / ( fact(r)*fact(n-r) );
    return c;
}

void pascal(int n) {
    /*
    for (int i=0; i<=n; i++) {
        for (int j=0; j<=i; j++) {
            cout<<combination(i,j)<<" ";
        }
        cout<<"\n";
    }*/
    for (int i=0; i<=n; i++) {
        int c = 1;
        //cout<<c<<" ";
        for (int j=0; j<=i; j++) {
            cout<<c<<" ";
            c = c*((float)(i-j)/(j+1));
            
        }
        cout<<"\n";
    }
}