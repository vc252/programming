#include <bits\stdc++.h>
using namespace std;

void swap(vector<int> &v,int i,int j);
void bubble_sort(vector<int> &v,int start,int end);

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

   bubble_sort(v,0,v.size()-1);

    for (int x:v) {
        cout<<x<<" ";
    }
    return 0;
}

void bubble_sort(vector<int> &v,int start,int end) {
    if (end<1) return;
    int sorted = true;
    for (int j=0; j<end; j++) {
        if (v[j]>v[j+1]) {
            swap(v,j,j+1);
            sorted = false;
        }
    }
    if (sorted) return;
    bubble_sort(v,start,end-1);
}

void swap(vector<int> &v,int i,int j) {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}