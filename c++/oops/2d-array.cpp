#include <bits/stdc++.h>
using namespace std;

int main(void) {
    int** arr = new int*[5];
    for (int i=0; i<5; i++) {
        arr[i] = new int[3];
    }
    for (int i=0; i<5; i++) {
        for (int j=0; j<3; j++) {
            arr[i][j] = 5;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    for (int i=0; i<5; i++) {
        delete[] arr[i];
    }
    
    delete[] arr;
    return 0;
}