//https://www.geeksforgeeks.org/number-of-sub-sequences-of-non-zero-length-of-a-binary-string-divisible-by-3/
#include <bits/stdc++.h> 
using namespace std; 
#define N 100 
  
int dp[N][3]; 
bool v[N][3]; 
  
// Function to return the number of 
// sub-sequences divisible by 3 
int findCnt(string& s, int i, int r) 
{ 
    // Base-cases 
    if (i == s.size()) { 
        if (r == 0) 
            return 1; 
        else
            return 0; 
    } 
  
    // If the state has been solved 
    // before then return its value 
    if (v[i][r]) 
        return dp[i][r]; 
  
    // Marking the state as solved 
    v[i][r] = 1; 
  
    // Recurrence relation 
    dp[i][r] 
        = findCnt(s, i + 1, (r * 2 + (s[i] - '0')) % 3) 
          + findCnt(s, i + 1, r); 
  
    return dp[i][r]; 
} 
