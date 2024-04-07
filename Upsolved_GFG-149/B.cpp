class Solution {
  public:
    vector<int> canTrade(int n, vector<int>& nums, int q,
                         vector<vector<int>>& queries) {
        // Write your code here.
        vector<int>cnt(n, 0), ans;
        cnt[0]=1;
        for(int i=1;i<n;i++)
        {
            cnt[i]=(nums[i]!=nums[i-1])? cnt[i-1]+1: cnt[i-1];
        }
        for(auto it:queries)
        {
            int st=it[0]-1, en=it[1]-1;
            if(cnt[st]==cnt[en])
            {
                ans.push_back(1);
            }
            else
            {
                ans.push_back(0);
            }
        }
        return ans;
    }
};
