#include<bits/stdc++.h>
using namespace std;
long long findHours(vector<int> &v, int hourly){
    long long TotalH = 0;
    for(int i=0; i<v.size(); i++){
        TotalH += (v[i] + hourly -1)/hourly;
    }
    return TotalH;
}
int minimumRateToEatBananas(vector<int> &v, long long h) {
    int lo = 1;
    int hi = *max_element(v.begin(), v.end());
    while(lo <= hi){
        int mid = lo+(hi-lo)/2;
        int totalHours = findHours(v,mid);
        if(totalHours <= h){
            hi = mid-1;
        }
        else{
            lo = mid+1;
        }
    }
    return lo;
}
int main(){
    int n;
    cout << "Enter number of buses: ";
    cin >> n;

    vector<int> v(n);
    cout << "Enter total no of each piles : ";
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int hours;
    cout << "Enter total hours required : ";
    cin >> hours;
    cout<<"Minimum time to take all the banana piles : " << minimumRateToEatBananas(v,hours) << endl;
    return 0;
}