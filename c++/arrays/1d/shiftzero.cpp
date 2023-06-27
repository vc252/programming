#include <bits/stdc++.h>
using namespace std;

void input(vector<int> &v);
void print_vector(vector<int> &v);
void swap(vector<int> &v,int i,int j);
void shift_zero(vector<int> &v);

int main(void) {
    vector<int> v;
    input(v);
    shift_zero(v);
    print_vector(v);
    return 0;
}
//brute
//O(2n) time and O(x) extra space where x is the number of non zero elements
/*void shift_zero(vector<int> &v) {
    vector<int> temp;
    for (int x:v) {
        if (x!=0) {
            temp.emplace_back(x);
        }
    }
    int i=0;
    for (int x:temp) {
        v[i]=x;
        i++;
    }
    while(i<v.size()) {
        v[i] = 0;
        i++;
    }
}*/

//my way
//O(2n-x) time
//extra space O(1)
/*void shift_zero(vector<int> &v) {
    int i,j;
    for (i=0,j=0; i<v.size(); i++) {
        if (v[i] != 0) {
            v[j] = v[i];
            j++;
        }
    }

    while (j<v.size()) {
        v[j] = 0;
        j++;
    }
}*/

//optimal
//O(n) time
//extra space O(1)
void shift_zero(vector<int> &v) {
    int j=0;
    while(v[j]!=0) j++;
    for (int i=j+1; i<v.size(); i++) {
        if (v[i]!=0) {
            swap(v,i,j);
            j++;
        } 
    }
}

void input(vector<int> &v) {
    int n;
    cout<<"Enter number of elements in vector: ";
    cin>>n;
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

void swap(vector<int> &v,int i,int j) {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}