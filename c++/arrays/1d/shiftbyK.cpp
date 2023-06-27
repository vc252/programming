#include <bits/stdc++.h>
using namespace std;

void shift_left(vector<int> &v,int k);
void print_vector(vector<int> &v);
void reverse(vector <int> &v,int start,int end);

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
    int k;
    cout<<"Enter number of places you want to shift_left: ";
    cin>>k;
    shift_left(v,k);
    print_vector(v);
    return 0;
}
//brute
//time complexity O(n+2k)
//extra space O(k)
/*void shift_left(vector<int> &v,int k) {
    k = k%v.size();
    vector<int> temp;
    for (int i=0; i<k; i++) {
        temp.emplace_back(v[i]);
    }

    for (int i=k; i<v.size(); i++) {
        v[i-k] = v[i];
    }

    for (int i=0; i<k; i++) {
        v[v.size()-k+i] = temp[i];
    }
}*/

//optimal
//time O(2n)
//extra space O(1)
/*void shift_left(vector<int> &v,int k) {
    k = k%v.size();
    reverse(v,0,k-1);
    reverse(v,k,v.size()-1);
    reverse(v,0,v.size()-1);
}*/

//my way
//time complexity O(n+k)
//extra space O(n)
void shift_left(vector<int> &v,int k) {
    deque<int> temp;
    for (int i=0; i<k; i++) {
        temp.emplace_back(v[i]);
    }
    for (int i=v.size()-1; i>=k; i--) {
        temp.emplace_front(v[i]);
    }
    v.clear();
    for (int x:temp) {
        v.emplace_back(x);
    }
}

void print_vector(vector<int> &v) {
    for (int x:v) {
        cout<<x<<" ";
    }
}

void reverse(vector <int> &v,int start,int end) {
    while(start<end) {
        int temp = v[start];
        v[start] = v[end];
        v[end] = temp;
        start++;
        end--;
    }
}