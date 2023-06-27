#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &v,int low,int high);
void quick_sort(vector<int> &v,int low,int high);
void sw(vector<int> &v,int i,int j);

int main(void) {
    srand(time(NULL));
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

    quick_sort(v,0,v.size()-1);
    cout<<endl;
    for (int x:v) {
        cout<<x<<" ";
    }

    return 0;
}

void quick_sort(vector<int> &v,int low,int high) {
    if (low<high) {
        int pivot = partition(v,low,high);
        quick_sort(v,low,pivot-1);
        quick_sort(v,pivot+1,high);
    }
}

int partition(vector<int> &v,int low,int high) {
    int pivot = low+rand()%(high-low+1);
    cout<<endl<<v[pivot]<<endl;
    sw(v,pivot,low);
    int i = low;
    int j = high;
    cout<<i<<" "<<j<<endl;
    while(i<j) {
        while(v[i]<=v[low] && i<high) i++;
        while(v[j]>=v[low] && j>low) j--;
        if (i<j ) sw(v,i,j);
        //cout<<endl;
        for (int x:v) {
        cout<<x<<" ";
        }
        cout<<endl;
    }
    sw(v,low,j);
    for (int x:v) {
        cout<<x<<" ";
    }
    cout<<endl;
    return j;
}

void sw(vector<int> &v,int i,int j) {
    int temp = v[i];
    v[i] = v[j];
    v[j] = temp;
}