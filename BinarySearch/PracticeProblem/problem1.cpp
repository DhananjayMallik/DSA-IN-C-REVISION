#include <bits/stdc++.h>
using namespace std;

bool is_Possible_Soln(vector<int> &time, int n, int m, long long mid){
    long long Chapter = 0;
    int days = 1;

    for(int i = 0; i < time.size(); i++){
        if(Chapter + time[i] <= mid){
            Chapter += time[i];
        } else {
            days++;
            if(days > n || time[i] > mid){
                return false;
            }
            Chapter = time[i];
        }
    }
    return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> &time){
    long long lo = *max_element(time.begin(), time.end());
    long long hi = 0;

    for(int i = 0; i < time.size(); i++){
        hi += time[i];
    }

    long long ans = -1;

    while(lo <= hi){
        long long mid = lo + (hi - lo) / 2;
        if(is_Possible_Soln(time, n, m, mid)){
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return ans;
}

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> time(m);
    for(int i = 0; i < m; i++){
        cin >> time[i];
    }

    cout << ayushGivesNinjatest(n, m, time) << endl;
    return 0;
}
