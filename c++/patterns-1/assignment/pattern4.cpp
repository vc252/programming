#include <iostream>
using namespace std;

int main(void) {
    int n=4;
    char a = '1';
    for (int i=1; i<=n; i++) {

        if (i%2==0) a ='A';
        else a = '1'; 

        for (int j=1; j<=i; j++) {
            cout<<(char)a<<" ";
            a++;
        }

        cout<<endl;
    }
    exit(EXIT_SUCCESS);
}