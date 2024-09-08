#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <bits/ranges_algo.h>
using namespace std;

int powerOfTwo(int n) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        result = 2*result %1000000007;
    }
    return result-1;
}
int main() {
    int n;
    cin>>n;
    long long ans = 0;
    vector<int>a;
    vector<int>b;
    for(int i=0;i<n;i++) {
        int aaa;cin>>aaa;a.push_back(aaa);
    }
    for(int i=0;i<n;i++) {
        int aaa;cin>>aaa;b.push_back(aaa);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int tmpa = 0;
    int tmpb = 0;
    int beforeIndex = 0;
    for(int i=0;i<n;) {
        int index = upper_bound(a.begin(),a.end(),b[i])-a.begin();
        beforeIndex = 0;
        while(i+1<n&&index == upper_bound(a.begin(),a.end(),b[i+1])-a.begin()) {
            i++;
        }
        ans += powerOfTwo(i-beforeIndex)*powerOfTwo(index)%1000000007;
        beforeIndex = i;
        i++;
    }
    cout<<ans<<endl;
}
// 64 位输出请用 printf("%lld")