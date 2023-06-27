#include <bits\stdc++.h> 
using namespace std;

void sum_tillp(int n,int sum);
int sum_tillf(int n);

int main(void) {
    cout<<"Enter number: ";
    int num;
    cin>>num;
    sum_tillp(num,0);
    cout<<endl;
    cout<<sum_tillf(num);
    return 0;
}
//parameterised way
void sum_tillp(int n,int sum) {
    if (n<1) {
        cout<<sum;
        return;
    }
    sum+=n;
    sum_tillp(n-1,sum);
}

//functional way
int sum_tillf(int n) {
    if (n==0) return 0;
    return n+sum_tillf(n-1);
}