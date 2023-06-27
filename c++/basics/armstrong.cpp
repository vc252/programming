#include <iostream>
using namespace std;

bool armstrong(int x);

int main(void) {
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"The armstrong series till "<<n<<" is:"<<endl;
    for (int i=0; i<=n; i++) {
        if (armstrong(i)) {
            cout<<i<<endl;
        }
    }
    exit(EXIT_SUCCESS);
}

bool armstrong(int x) {
    int sum=0;
    int num = x;
    if (x==0) {
        return true;
    }
    while (x!=0) {
        sum += (x%10)*(x%10)*(x%10);
        x/=10;
    }
    if (sum==num) return true;
    else return false;
}
