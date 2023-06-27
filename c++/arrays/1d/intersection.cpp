#include <bits/stdc++.h>
using namespace std;

void intersection_of(vector<int> &u,vector<int> &v1,vector<int> &v2);
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
    intersection_of(u,v1,v2);
    print_vector(u);
    return 0;
}

void intersection_of(vector<int> &u,vector<int> &v1,vector<int> &v2) {
    int i=0;
    int j=0;
    while (i<v1.size() && j<v2.size()) {
        if (v1[i]==v2[j]) {
            u.emplace_back(v1[i]);
            i++;
            j++;
        } else {
            int m = min(v1[i],v2[j]);
            if (v1[i]==m) i++;
            else j++;
        }
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