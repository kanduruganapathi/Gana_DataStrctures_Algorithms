class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int  n=nums.size();
        int su=(n*(n+1))/2;
        int s2=0;
        for(int i=0;i<nums.size();i++)
        {
            s2+=nums[i];
        }     
        
        int miss=su-s2;
        return miss;

    }
    
};
