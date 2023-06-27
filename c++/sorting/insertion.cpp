#include <bits/stdc++.h>
using namespace std;

void insertion_sort(vector<int> &v);
void swap(int i,int j,vector<int> &v);


int main(void) {
    cout<<"Enter the number of elements in array:"<<endl;
    int n;
    cin>>n;
    cout<<"Enter elements in the array:"<<endl;
    vector<int> v;
    for (int i=0; i<n; i++) {
        int input;
        cin>>input;
        v.emplace_back(input);
    }
    insertion_sort(v);
    for (int i: v) {
        cout<<i<<" ";
    }
    exit(EXIT_SUCCESS);
}

void insertion_sort(vector<int> &v) {
    for (int i=1; i<v.size(); i++) {
        for (int j=i; j>0; j--) {
            if (v[j]<v[j-1]) swap(j,j-1,v);
            else break;
        }
    }
}

void swap(int i,int j,vector<int> &v) {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}