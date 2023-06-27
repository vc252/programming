#include <bits/stdc++.h>
using namespace std;

int unique(vector<int> &v);
void input(vector<int> &v,int n);

int main(void) {
    vector<int> v;
    int n;
    cout<<"Enter number of elements in vector: ";
    cin>>n;
    input(v,n);
    int k = unique(v);
    cout<<k;
    return 0;
}
//brute
//O(n^2) time
/*int unique(vector<int> &v) {
    for (int i =0; i<v.size(); i++) {
        int count=0;
        for (int j=0; j<v.size(); j++) {
            if (v[i]==v[j]) count++;
        }
        if (count==1) {
            return v[i];
        }
    }
    return -1;
}*/

//better
//can also use direct hashing if range is small
//O(n+n/2) time
//O(n/2) extra space
//use ordered map if set of data is unique and will lead to worst case O(n^2)
/*int unique(vector<int> &v) {
    unordered_map<int,int> mpp;
    for (int x:v) mpp[x]++;
    for (auto x:mpp) {
        if (x.second == 1) return x.first;
    }
    return -1;
}*/

//optimal
//O(n) time
//O(1) extra space
//only use if elements are repeated even time else use map
int unique(vector<int> &v) {
    int XOR=0;
    for (int x:v) {
        XOR=XOR^x;
    }
    return XOR;
}


void input(vector<int> &v,int n) {
    cout<<"Enter elements in vector: ";
    for (int i=0; i<n; i++) {
        int input;
        cin>>input;
        v.emplace_back(input);
    }
}