#include <bits\stdc++.h> 
using namespace std;

void bubble_sort(vector<int> &v);

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

    bubble_sort(v);

    for (int x:v) {
        cout<<x<<" ";
    }
}

void bubble_sort(vector<int> &v) {
    for (int i=v.size()-1; i>=1; i--) {
        int sorted = true;
        for (int j=0; j<i; j++) {
            if (v[j]>v[j+1]) {
                int temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
                sorted = false;
            }
        }
        if (sorted) {
            return;
        }
    }
}