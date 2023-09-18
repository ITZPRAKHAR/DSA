#include<iostream>
#include <bits/stdc++.h>

using namespace std;

#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#define vi vector<int>
#define pb push_back
#define mii map<int, int>
#define pii pair<int, int>
#define forn(i , n) for(auto i = 0;  i<n; i++)

int fibo(int n){
    vector<int>dp(n+1);
    dp[1] = 1;
    dp[0] = 0;
    for(int i =2; i<=n; i++){
      dp[i] =  dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int fiboSpace(int n){
   if(n<=0){
    return n;
   }
   int prev1 = 1;
   int prev2 = 0;

   for(int i= 2; i<=n; i++){
    int curr = prev1 + prev2;

    prev2 = prev1;
    prev1 = curr;
    
   }

   return prev1;
}
int main (){
   //your code goes here
   cout<<fiboSpace(3);
    
   return 0;
}
