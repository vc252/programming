#include <bits\stdc++.h>
using namespace std;

void merge_sort(vector<int> &v,int low,int high);
void merge(vector<int> &v,int low,int mid,int high);

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

    merge_sort(v,0,v.size()-1);

    for (int x:v) {
        cout<<x<<" ";
    }
    return 0;
}

void merge_sort(vector<int> &v,int low,int high) {
    if (low>=high) return;
    int mid = (low+high)/2;
    merge_sort(v,low,mid);
    merge_sort(v,mid+1,high);
    merge(v,low,mid,high);
}

void merge(vector<int> &v,int low,int mid,int high) {
    int left = low;
    int right = mid+1;
    vector<int> temp;
    while(left<=mid && right<=high) {
        if (v[left]<=v[right]) {
            temp.emplace_back(v[left]);
            left++;
        } else {
            temp.emplace_back(v[right]);
            right++;
        }
    }
    while(left<=mid) {
        temp.emplace_back(v[left]);
        left++;
    }
    while(right<=high) {
        temp.emplace_back(v[right]);
        right++;
    }
    for (int i=low; i<=high; i++) {
        v[i] = temp[i-low];
    }
}