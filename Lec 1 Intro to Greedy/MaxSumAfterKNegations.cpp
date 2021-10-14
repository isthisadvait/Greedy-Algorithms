/* Problem Link -https://leetcode.com/problems/maximize-sum-of-array-after-k-negations
    Platform - LeetCode
    Solution By - Raman Mehta
*/

#include<bits/stdc++.h>
using namespace std;

int largestSumAfterKNegations(vector<int>& a, int k) {
        priority_queue<int,vector<int>,greater<int>>pq(a.begin(),a.end());//O(n)
        
        int ans=0;
        while(k--){
            int x=pq.top();
            pq.pop();
            pq.push(-x);
        }
        while(!pq.empty()){
            ans+=pq.top();
            pq.pop();
        }
        return ans;
 }

 int main(){
     int t; cin>>t;
     while(t--){

         int n,k; cin>>n>>k;
         vector<int> v(n);
         for(int i=0;i<n;i++) cin>>v[i];
         cout<<largestSumAfterKNegations(v,k)<<endl;;
     }
 }