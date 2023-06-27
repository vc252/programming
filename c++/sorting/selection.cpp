#include <bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> &v);
void swap(int i,int j,vector<int> &v);
int smallest(int j,vector<int> &v);


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
    selection_sort(v);
    for (int i: v) {
        cout<<i<<" ";
    }
    exit(EXIT_SUCCESS);
}

void selection_sort(vector<int> &v) {
    for (int i=0; i<v.size()-1; i++) {
        int small = smallest(i+1,v);
        if (v[small]<v[i]) swap(i,small,v);
    }
}

int smallest(int j,vector<int> &v) {
    int smallest=v[j];
    int index = j;
    j++;
    while(j<v.size()) {
        if (v[j]<smallest) {
            smallest = v[j];
            index = j;
        }
        j++;
    }
    return index;
}

void swap(int i,int j,vector<int> &v) {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}