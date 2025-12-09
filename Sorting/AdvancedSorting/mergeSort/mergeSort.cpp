// Q : Merge Sort in decreasing order using merge sort algorithm
#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>&a, int lb, int mid, int ub){
    vector<int>b;
    int i = lb;
    int j = mid+1;
    int k = lb;
    while( i<=mid && j<=ub){
        if(a[i] < a[j]) b.push_back(a[i++]);
        else b.push_back(a[j++]);
    }
    while(i<=mid) b.push_back(a[i++]);
    while(j<=ub) b.push_back(a[j++]);
      for(int i=lb; i<=ub; i++){
        a[i]=b[i-lb];
     }

}
void mergeSort(vector<int>&a, int lb, int ub){
    if(lb<ub){
        int mid = (lb+ub)/2;
        mergeSort(a,lb,mid);
        mergeSort(a,mid+1,ub);
        merge(a,lb,mid,ub);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++) cin>>a[i];
    mergeSort(a,0,n-1);
  for(auto x:a) cout<<x<<" ";
    return 0;
}