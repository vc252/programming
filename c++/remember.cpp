#include<bits\stdc++.h>
using namespace std;

void sol(vector<int> &nums,int k);
bool comp(pair<int,int> p1,pair<int,int> p2);

int main(void) {
    vector<int> nums = {1,1,2,2,3,3,3,4};
    map<int,int> mpp;
    for (int i:nums) {
        mpp[i]++;
    }
    vector<pair<int,int>> mpp_copy;
    for (auto x:mpp) {
        mpp_copy.emplace_back(x);
    }
    sort(mpp_copy.begin(),mpp_copy.end(),comp);
    vector<int> v;
    for (int i=0;i<2;i++) {
        v.emplace_back(mpp_copy[i].first);
    }
    for (auto x:v) {
        cout<<x<<" ";
    }
}

bool comp(pair<int,int> p1,pair<int,int> p2) {
    if (p1.second > p2.second) return true;
    if (p1.second < p2.second) return false;
    return (p1.first > p2.first);
}
/*void sol(vector<int> &nums,int k) {
    map<int,int> mpp;
    for (int i:nums) {
        mpp[i]++;
    }
    map<int,int> mppv;
    for (auto i:mpp) {
        mppv.emplace(i.second,i.first);
    }
    vector<int> v;
    for (int i=0;i<k;i++) {
        auto x = --mppv.end();
        v.emplace_back(x->second);
        mppv.erase(x);
    }
    for (auto x:v) {
        cout<<x<<" ";
    }
}*/

