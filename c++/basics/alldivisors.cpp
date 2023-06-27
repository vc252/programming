#include <bits\stdc++.h>
using namespace std;
//function used
void all_div(int n);

int main(void) {
    //taking input
    cout<<"Enter number: ";
    int num;
    cin>>num;
    all_div(num);

}

void all_div(int n) {
    //adding all divisors to a vector
    vector<int> arr;
    for (int i=1; i*i <= n; i++) {
        if ( n%i==0 ) {
            arr.emplace_back(i);
            if (n/i != i) arr.emplace_back(n/i);
        }
    }
    //sorting the vector
    sort(arr.begin(),arr.end());
    //printing the result
    cout<<"all divisors of "<<n<<" are: ";
    for (int i: arr) {
        cout<<i<<" ";
    }
}
