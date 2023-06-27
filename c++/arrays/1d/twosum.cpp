#include <bits/stdc++.h>
using namespace std;

void twosum(vector<int> arr,int sum);
void twosum2(vector<int> arr,int sum);

int main(void) {
    vector<int> arr = {2,5,8,4,9,10,6,3,1,12};
    twosum2(arr,14);
    exit(EXIT_SUCCESS);
}

//method 1 time complexity n^2
void twosum(vector<int> arr,int sum) {
    for (int i=0; i<arr.size()-1; i++) {
        for (int j=i+1; j<arr.size(); j++) {
            if ((arr[i]+arr[j])==sum) cout<<i<<" "<<j<<endl;
        }
    }
}

//method 2 time complexity of n using two pointers
void twosum2(vector<int> arr,int sum) {
    sort(arr.begin(),arr.end());
    for (int i=0,j=arr.size()-1; i<j;) {
        int s = arr[i]+arr[j];
        if (s==sum) {
            cout<<i<<" "<<j<<endl;
            i++,j--;
        } else if (s>sum) {
            j--;
        } else {
            i++;
        }

    }
}