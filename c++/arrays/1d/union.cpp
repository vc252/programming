#include <bits/stdc++.h>
using namespace std;

void union_of(vector<int> &u,vector<int> &v1,vector<int> &v2);
void input(vector<int> &v,int n);
void print_vector(vector<int> &v);

int main(void) {
    vector<int> v1,v2;
    int n1;
    cout<<"Enter number of elements in vector 1: ";
    cin>>n1;
    input(v1,n1);
    int n2;
    cout<<"Enter number of elements in vector 2: ";
    cin>>n2;
    input(v2,n2);
    vector<int> u;
    union_of(u,v1,v2);
    print_vector(u);
    return 0;
}

//brute
//O((n1+n2)logn+n1+n2) where x is the number of unique elements
//extra space O(n1+n2) to solve and O(n1+n2) for solution
/*void union_of(vector<int> &u,vector<int> &v1,vector<int> &v2) {
    set<int> st;
    for (int x:v1) {
        st.emplace(x);
    }
    for (int x:v2) {
        st.emplace(x);
    }
    for (int x:st) {
        u.emplace_back(x);
    }
}*/

//optimal
//O(n1+n2) time
//extra space O(1) to solve and O(n1+n2) for solution
void union_of(vector<int> &u,vector<int> &v1,vector<int> &v2) {
    int i = 0;
    int j = 0;
    int m = min(v1[i],v2[j]);
    u.emplace_back(m);
    if (v1[i]==m) i++;
    else j++;
    while(i<v1.size() && j<v2.size()) {
        m = min(v1[i],v2[j]);
        if (u[u.size()-1]!=m) u.emplace_back(m);
        if (v1[i]==m) i++;
        else j++; 
    }
    while (i<v1.size()) {
        if (u[u.size()-1]!=v1[i]) u.emplace_back(v1[i]);
        i++;
    }
    while (j<v2.size()) {
        if (u[u.size()-1]!=v2[j]) u.emplace_back(v2[j]);
        j++;
    }
}

void input(vector<int> &v,int n) {
    cout<<"Enter elements in vector: ";
    for (int i=0; i<n; i++) {
        int input;
        cin>>input;
        v.emplace_back(input);
    }
}

void print_vector(vector<int> &v) {
    for (int x:v) {
        cout<<x<<" ";
    }
}