#################################################################################  Question  ###################################################################################################################


Consider a game where a player can score 3 or 5 or 10 points in a move. Given a total score n, find number of distinct combinations to reach the given score.

Example 1:

Input
n = 10
Output
2
Explanation
There are two ways {5,5} and {10}.
Example 2:

Input
n = 20
Output
4
Explanation
There are four possible ways. {5,5,5,5}, {3,3,3,3,3,5}, {10,10}, {5,5,10}.
Your Task:  
You don't need to read input or print anything. Your task is to complete the function count( ) which takes n as input parameter and returns the answer to the problem.

Expected Time Complexity: O(n)
Expected Auxiliary Space: O(n)

Constraints:

1 ≤ n ≤ 106







#################################################################################  Solution  ###################################################################################################################
//{ Driver Code Starts
// Driver Code
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    // Complete this function
    long long int count(long long int n)
    {
    	  vector<long long>dp(n+1,0);
      dp[0] = 1;
      for(int i=3;i<n+1;i++) {
          dp[i] += dp[i-3];
      }
      for(int i=5;i<n+1;i++) {
          dp[i] += dp[i-5];
      }
      for(int i=10;i<n+1;i++) {
          dp[i] += dp[i-10];
      }
      return dp[n];
    	
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		Solution obj;
		cout<<obj.count(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends

