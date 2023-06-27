#include <bits/stdc++.h>
using namespace std;

void input(vector<int> &v,int n);
void print_vector(vector<int> &v);
int find_missing(vector<int> &v);

int main(void) {
    vector<int> v;
    int n;
    cout<<"Enter number of elements in vector: ";
    cin>>n;
    input(v,n);
    int missing_element = find_missing(v);
    cout<<missing_element;
    return 0;
}
//brute
//O(n^2) time not exactly but approximated
//O(1) extra space
/*int find_missing(vector<int> &v) {
    for (int i=1; i<=v.size(); i++) {
        int found = false;
        for (int x:v) {
            if (x==i) {
                found = true;
                break;
            }
        }
        if (!found) {
            return i;
        }
    }
    return -1;
}*/

//better using hashing
//O(2n) time
//O(n) extra space
/*int find_missing(vector<int> &v) {
    vector<int> temp(v.size()+1,0);
    for (int x:v) temp[x-1]=1;
    for (int i=0; i<=v.size(); i++) {
        if (temp[i]==0) return i+1;
    }

}*/
//v.size()+1 is N 
//optimal using sum
//O(n) time
//O(1) extra space
/*int find_missing(vector<int> &v) {
    int sum = 0;
    for (int x:v) {
        sum+=x;
    }
    int expected_sum = (v.size()+1)*(v.size()+2)/2;
    return expected_sum-sum;
}*/

//optimal using XOR
//O(n) time
//O(1) extra space
//lsightly better than the sum algo
int find_missing(vector<int> &v) {
    int XOR1=0,XOR2=0;
    for (int i=0; i<v.size(); i++) {
        XOR1 = XOR1^v[i];
        XOR2 = XOR2^(i+1);
    }
    XOR2 = XOR2^(v.size()+1);
    return XOR1^XOR2;
}

void input(vector<int> &v,int n) {
    cout<<"Enter elements in vector: ";
    for (int i=0; i<n; i++) {
        int input;
        cin>>input;
        v.emplace_back(input);
    }
}

void print_vector(vector<int> &v) {
    for (int x:v) {
        cout<<x<<" ";
    }
}