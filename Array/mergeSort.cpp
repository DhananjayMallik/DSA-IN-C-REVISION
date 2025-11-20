#include<iostream>
#include<vector>
using namespace std;
vector<int>merge(vector<int>&arr1 , vector<int>&arr2){
    int n = arr1.size();
    int m = arr2.size();
    vector<int>res(m+n);
    int i = 0, j=0 , k=0;
    while(i <= n-1 && j <= m-1){
        if(arr1[i] < arr2[j]){
            res[k] = arr1[i];
            k++,i++;
        }
        if(arr1[i] > arr2[j]){
            res[k] = arr2[j];
            k++,j++;
        }
        if(i==n){
            while(j <= m-1){
                res[k] = arr2[j];
            k++,j++;
            }
        }
         if(j==m){
            while(i <= n-1){
                res[k] = arr1[i];
            k++,i++;
            }
        }
    }
    return res;
}
int main(){
    int n;
    cout << "Enter the size of the vector : ";
    cin >> n;
    vector<int> v1;
    cout << "Enter the vector element : ";
    for (int i = 0; i <= n - 1; i++)
    {
        int p;
        cin >> p;
        v1.push_back(p);
    }
     int m;
    cout << "Enter the size of the vector : ";
    cin >> m;
    vector<int> v2;
    cout << "Enter the vector element : ";
    for (int i = 0; i <= m - 1; i++)
    {
        int p;
        cin >> p;
        v2.push_back(p);
    }
    vector<int>v=merge(v1,v2);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}