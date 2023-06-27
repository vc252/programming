#include <bits\stdc++.h>
using namespace std;

void swap(vector<int> &v,int i,int j);
void selection_sort(vector<int> &v,int start,int end);

int main(void) {
    int n;
    cout<<"Enter number of elements in vector: ";
    cin>>n;

    vector<int> v;
    cout<<"Enter elements in vector: ";

    for (int i=0; i<n; i++) {
        int input;
        cin>>input;
        v.emplace_back(input);
    }

   selection_sort(v,0,v.size());

    for (int x:v) {
        cout<<x<<" ";
    }
    return 0;
}

void selection_sort(vector<int> &v,int start,int end) {
    if (start > v.size()-2) return;
    int min = start;
    for (int i = start+1; i<end; i++) {
        if (v[min]>v[i]) {
            min = i;
        }
    }
    swap(v,min,start);
    selection_sort(v,start+1,end);
}

void swap(vector<int> &v,int i,int j) {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}