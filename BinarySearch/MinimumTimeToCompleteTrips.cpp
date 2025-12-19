#include <bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool is_Possible_Sol(vector<int>& time, long long givenTime , int totalTrips){
        long long ActualTrips = 0;
        for(int i=0; i<time.size(); i++){
            ActualTrips += givenTime/time[i];
            if(ActualTrips >= totalTrips){
                return true;
            }
        }
        return false;
    }
    long long minimumTime(vector<int>& time, int totalTrips){
        long long lo = 1;
        long long hi = (long long)*min_element(time.begin(), time.end()) * totalTrips;
        while(lo < hi){
            long long mid = lo+(hi-lo)/2;
            if(is_Possible_Sol(time,mid,totalTrips)){
                hi = mid;
            }
            else{
                lo = mid+1;
            }
        }
        return lo;
    }
};
int main()
{
    int n;
    cout << "Enter number of buses: ";
    cin >> n;

    vector<int> time(n);
    cout << "Enter time for each bus: ";
    for (int i = 0; i < n; i++)
    {
        cin >> time[i];
    }

    int totalTrips;
    cout << "Enter total trips required: ";
    cin >> totalTrips;

    Solution obj;
    cout << "Minimum time required: "
         << obj.minimumTime(time, totalTrips) << endl;
    return 0;
}