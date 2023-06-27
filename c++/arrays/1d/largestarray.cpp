//find ther largest subarray with sum k
#include <bits/stdc++.h>
using namespace std;

void input(vector<int> &v,int n);
int largest_subarr(vector<int> v,int k);
int main(void) {
    vector<int> v;
    int n;
    cout<<"Enter number of elements in vector: ";
    cin>>n;
    input(v,n);
    cout<<"Enter sum: ";
    int sum;
    cin>>sum;
    cout<<largest_subarr(v,sum);
    return 0;
}

//brute
//O(n^2) time
//constant extra space
/*int largest_subarr(vector<int> v,int k) {
    int sum,len =0;
    for (int i=0; i<v.size(); i++) {
        sum=0;
        for (int j=i; j<v.size(); j++) {
            sum+=v[j];
            if (sum==k) len = max(len,j-i+1);
        }
    }
    return len;
}*/

//best time O(n) worst time O(n*k) where k is the sum
//O(1) extra space
/*int largest_subarr(vector<int> v,int k) {
    int sum,len=0;
    for (int i=0; i<v.size(); i++) {//this condition is no longer used
        sum=0;
        for (int j=i; j<v.size(); j++) {//this condition is no longer used
            sum+=v[j];
            if (sum==k) {
                len = max(len,j-i+1);
                break;
            }
            if (sum>k) break;
            if (j+1==v.size()) return len;
        }
    }
    return len;
}*/

//better
//best time O(n) worst time O(n*k) where k is the sum
//O(1) extra space
/*int largest_subarr(vector<int> v,int k) {
    int sum = 0,len = 0;
    for (int i=0,j=0; j<v.size(); j++) {
        sum+=v[j];
        if (sum==k) {
            len = max(len,j-i+1);
            i++;
            j=i-1;
            sum = 0;
        } else if (sum>k) {
            i++;
            j=i-1;
            sum = 0;
        }
    }
    return len;
}*/

//optimal
//O(n) time
//constant space
int largest_subarr(vector<int> v,int k) {
    int sum = 0,len = 0;
    for (int i=0,j=0; j<v.size(); j++) {
        sum+=v[j];
        if (sum>k) {
            sum-=v[i];
            i++;
        }
        if (sum==k) len = max(len,j-i+1);
    }
    return len;
}

//when negatives are also involved
//O(n) time
//O(n) extra space
/*int largest_subarr(vector<int> v,int k) {
    int sum = 0,len = 0;
    unordered_map<int,int> mpp;
    for (int i=0; i<v.size(); i++) {
        sum+=v[i];
        mpp.emplace(sum,i);
        if (sum==k) {
            len = i+1;
        } else if (mpp.count(sum-k)) {
            len = max(len,i-mpp[sum-k]);
        }
    }
    return len;
}*/

void input(vector<int> &v,int n) {
    cout<<"Enter elements in vector: ";
    for (int i=0; i<n; i++) {
        int input;
        cin>>input;
        v.emplace_back(input);
    }
}