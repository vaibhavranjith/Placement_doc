int minDiffernce(int arr[], int n) { 
	int sum=0;
	for(int i=0;i<n;i++) 
		sum+=arr[i];      
	bool dp[n+1][sum+1];
	for(int i=0;i<=n;i++)
		for(int j=0;j<=sum;j++){
	            if(j==0)
	               dp[i][j]=true;
	            else if(i==0)
	                dp[i][j]=false;
	            else if(arr[i-1]>j)
	                dp[i][j]=dp[i-1][j];
	            else 
	                dp[i][j]=dp[i-1][j] || dp[i-1][j-arr[i-1]];
	        }
	int diff=INT_MAX;
	for(int i=0;i<=sum/2;i++)
		if(dp[n][i] and diff>abs(sum-2*i))
	        	diff=abs(sum-2*i);
	return diff;
} 
