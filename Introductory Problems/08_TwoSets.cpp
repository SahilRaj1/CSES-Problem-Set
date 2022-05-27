// Two Sets

#include <bits/stdc++.h>
using namespace std;

bool setGeneration(int i, vector<int> nums, vector<int> &v, long long target) {
    if (i==nums.size()) {
        long long sos = accumulate(v.begin(), v.end(), sos);
        if (sos==target) {
            for (auto value : v) {
                cout<<value<<" ";
            }
            cout<<endl;
            return true;
        }
    }

    // take
    v.push_back(nums[i]);
    if (setGeneration(i+1, nums, v, target)) return true;
    v.pop_back();
    // not take
    if (setGeneration(i, nums, v, target)) return true;
    return false;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    // Code here
    int n;
    cin>>n;
    vector<int> nums(n);
    for (int i=0; i<n; i++) {
        nums[i] = i+1;
    }
    vector<int> v;
    long long sum = (n*(n+1))/2;

    if (sum%2 != 0) {
        cout<<"NO"<<endl;
    } else {
        cout<<"YES"<<endl;
        setGeneration(0, nums, v, sum/2);
    }

    return 0;
}