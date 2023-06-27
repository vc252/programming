#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &arr);
void display(vector<int> arr);

int main(void) {
    vector <int> arr ={2,5,8,4,9,10,6,3,1,12};
    reverse(arr);
    exit(EXIT_SUCCESS);
}

void reverse(vector<int> &arr) {
    for (int i=0,j=arr.size()-1; i<j; i++,j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    display(arr);
}

void display(vector<int> arr) {
    for (int i=0; i<arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
}