#include<bits\stdc++.h>
using namespace std;

void reverse(vector<int>::iterator i,vector<int>::iterator j);

int main(void) {
    vector<int> v = {1,2,3,4,5};
    reverse(v.begin(),v.end()-1);
    for (int i:v) {
        cout<<i<<" ";
    }
    return 0;
}

void reverse(vector<int>::iterator i,vector<int>::iterator j) {
    if (i>=j) return;
    int temp = *i;
    *i = *j;
    *j = temp;
    reverse(i+1,j-1);
}