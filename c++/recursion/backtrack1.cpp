#include <bits\stdc++.h>
using namespace std;

void printf(int n);
void printb(int i,int n);

int main(void) {
    cout<<"enter number: ";
    int num;
    cin>>num;
    printf(num);
    cout<<endl;
    printb(1,num);
    return 0;
}

void printf(int n) {
    if (n==0) return;
    printf(n-1);//don't use n-- since it will result in an infinite loop
                //--n will result in printing one less bcz value of n is modified
    cout<<n<<" ";
}

void printb(int i,int n) {
    if (i==n+1) return;
    printb(i+1,n);
    cout<<i<<" ";
}