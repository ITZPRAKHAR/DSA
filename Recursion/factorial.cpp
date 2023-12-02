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

int factorial(int n){
    if(n == 0){
        return 1;
    }

    return n*factorial(n-1);
}

// dp solution 

int dp[1000] = {0};
int factorDP(int n) {
   if (n >= 0) {
      dp[0] = 1;
      for (int i = 1; i <= n; ++i) {
         dp[i] = i * dp[i - 1];
      }
      return dp[n];
   }
}

int main (){
   //your code goes here
cout<<factorial(4)<<endl;
cout<<factorDP(4);
    
    
   return 0;
}
