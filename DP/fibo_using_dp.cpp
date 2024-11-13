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

int term[1000];
// this is bottom to up 
int fibo(int n){
    vector<int>dp(n+1);
    dp[1] = 1;
    dp[0] = 0;
    for(int i =2; i<=n; i++){
      dp[i] =  dp[i-1] + dp[i-2];
    }
    return dp[n];
}

//meoization code here .. top to down

int mimfibo(int n){
	if(n <=1){
		return n;
	}
	
	if(term[n] != 0){
		return term[n];
	}
	else {
		term[n] = mimfibo(n-1) + mimfibo(n-2);
		return term[n];
	}
	
}


// space optimization of the fibo bttom up 
int fiboSpaceOptimize(int n){
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
   
   cout<<fiboSpaceOptimize(6)<<endl;
   cout<<mimfibo(6);
   
    
   return 0;
}
