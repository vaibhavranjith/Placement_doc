int getLowValue(set<int>& lowValue, int& n)
{
    auto it = lowValue.lower_bound(n);
    --it;
    return (*it);
}
int maxTripletSum(int arr[], int n)
{
    int maxSuffArr[n + 1];
    maxSuffArr[n] = 0;
    for (int i = n - 1; i >= 0; --i)
        maxSuffArr[i] = max(maxSuffArr[i + 1], arr[i]);
    int ans = 0;
    set<int> lowValue;
    lowValue.insert(INT_MIN);
    for (int i = 0; i < n - 1; ++i) 
        if (maxSuffArr[i + 1] > arr[i]) {
            ans = max(ans, getLowValue(lowValue,arr[i]) + arr[i] + maxSuffArr[i + 1]);
            lowValue.insert(arr[i]);
        }
    return ans;
}
