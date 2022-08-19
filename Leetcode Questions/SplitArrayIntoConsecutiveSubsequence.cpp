#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
bool isPossible(vector<int>& A) {
        unordered_map<int, int> left, end;
        for (int i: A) {
            left[i]++;
        }
        for (int i: A) {
            if (left[i] == 0) continue;
            left[i]--;
            if (end[i - 1] > 0) {   
                end[i - 1]--;
                end[i]++;
            } else if (left[i + 1] > 0 && left[i + 2] > 0) {
                left[i + 1]--;
                left[i + 2]--;
                end[i + 2]++;
            } else {   
                return false;
            }
        }
        return true;
    }
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
vector<int>v = {1,2,3,4,4,5};
 cout<<isPossible(v);
 return 0;
}