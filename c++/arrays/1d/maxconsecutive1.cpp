#include <bits/stdc++.h>
using namespace std;

void input(vector<int> &v,int n);
int max_consecutive_1(vector<int> &v);

int main(void) {
    vector<int> v;
    int n;
    cout<<"Enter number of elements in vector: ";
    cin>>n;
    input(v,n);
    int m = max_consecutive_1(v);
    cout<<m;
    return 0;
}
//O(n) time
//O(1) extra space
int max_consecutive_1(vector<int> &v) {
    int count=0;
    int max = count;
    for (int x:v) {
        if (x==0) {
            if (count>max) max = count;
            count = 0;
        }
        if (x==1) {
            count++;
        }
    }
    return max;
}

void input(vector<int> &v,int n) {
    cout<<"Enter elements in vector: ";
    for (int i=0; i<n; i++) {
        int input;
        cin>>input;
        v.emplace_back(input);
    }
}