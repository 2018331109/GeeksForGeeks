class Solution{   
public:
    vector<int> prefixDistinct(int n, vector<int> &nums)
    {
        // Write your code here.
        int cnt=0;
        set<int>st;
        vector<int>ans;
        for(int i=0;i<n;i++)
        {
            st.insert(nums[i]);
            ans.push_back(st.size());
        }
        return ans;
    }
};
