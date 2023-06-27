#include <bits\stdc++.h> 
using namespace std;


void factp(int n,int f);
int factf(int num);

int main(void) {
    cout<<"Enter number: ";
    int num;
    cin>>num;
    factp(num,1);
    cout<<endl<<factf(num);
    return 0;
}

void factp(int n,int f) {
    if (n==1) {
        cout<<f;
        return;
    }
    factp(n-1,f*n);
}

int factf(int num) {
    if (num==1) return 1;
    return num*factf(num-1);
}