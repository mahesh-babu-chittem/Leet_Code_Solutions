class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> ans_num(n);
        for(int i=0;i<n;i++)
        {
            ans_num[(i+k)%n]=nums[i];
        }
        nums=ans_num;
    }
};
