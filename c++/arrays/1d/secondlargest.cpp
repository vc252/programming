//find the second largest element in the array
#include <bits\stdc++.h>
using namespace std;

int second_largest(vector<int> &v);

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

    int a = second_largest(v);
    cout<<"second largest element in this arrray is: "<<a;
    return 0;
}

int second_largest(vector<int> &v) {
    int largest = v[0];
    int s_largest = INT_MIN;
    for (int i=0; i<v.size(); i++) {
        if (v[i]>largest) {
            s_largest = largest;
            largest = v[i];
        } else if (v[i]<largest && v[i]>s_largest) {
            s_largest = v[i];
        }
    }
    return s_largest;
}