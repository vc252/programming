#include <bits\stdc++.h>
using namespace std;

vector<int> topK(const vector<int> &v,int k);
bool comp(pair<int,int> p1,pair<int,int> p2);

int main(void) {
    int n;
    cout<<"enter number of elements in vector: ";
    cin>>n;
    vector<int> v;
    cout<<"Enter elements in vector: ";
    for (int i=0; i<n; i++) {
        int input;
        cin>>input;
        v.emplace_back(input);
    }
    int k;
    cout<<"Enter number of top elements you want: ";
    cin>>k;
    vector<int> ans = topK(v,k);
    for (int x:ans) {
        cout<<x<<" ";
    }

}

vector<int> topK(const vector<int> &v,int k) {
    unordered_map<int,int> mpp;
    for (int i:v) {
        mpp[i]++;
    }
    vector<pair<int,int>> mpp_copy;
    for (auto i:mpp) {
        mpp_copy.emplace_back(i.first,i.second);
    }
    sort(mpp_copy.begin(),mpp_copy.end(),comp);
    vector<int> ans;
    for (int i=0; i<k; i++) {
        ans.push_back(mpp_copy[i].first);
    }
    return ans;
}

bool comp(pair<int,int> p1,pair<int,int> p2) {
    if (p1.second>p2.second) return true;
    if (p1.second<p2.second) return false;
    if (p1.first>p2.first) return true;
    return false;
}

