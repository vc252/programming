#include <bits/stdc++.h>
using namespace std;

void remove_duplicate(vector<int> &v);
void input(vector<int> &v);
void remove_duplicate_order(vector<int> &v);

int main(void) {
    vector<int> v;
    input(v);
    //remove_duplicate(v);
    remove_duplicate_order(v);
    for (int x:v) {
        cout<<x<<" ";
    }
    
    return 0;
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
//if we don't care about the order then use this function to remove duplicate elements
//with O(2n) time complexity and space O(n)
//sorted arrray not required
void remove_duplicate(vector<int> &v) {
    unordered_set<int> s;
    for (int x:v) {
        s.emplace(x);
    }
    int i=0;
    for (int x:s) {
        v[i] = x;
        i++;
    }
    while(i<v.size()) {
        v[i] = 0;
        i++;
    }
}
//if we want to keep the array sorted with time complexity O(n) and space O(1)
//sorted array required
/*void remove_duplicate_order(vector<int> &v) {
    int current=0;
    for (int i=0; i<v.size();i++) {
        while(v[i]==v[current] && i<v.size()-1) i++;
        v[++current] = v[i];
    }
    while(current<v.size()-1) {
        current++;
        v[current] = 0;
    }
}*/

void remove_duplicate_order(vector<int> &v) {
    int j=0;
    for (int i=1; i<v.size();i++) {
        if (v[i]!=v[j]) {
            v[++j]=v[i];
        }
    }
    j++;
    while(j<v.size()) {
        v[j] = 0;
        j++;
    }
}
