class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> map;
        for(int i=0;i<nums.size();i++)
        {
            int num=nums[i];
            int more=target-num;
            if(map.find(more)!=map.end())
            {
                return {map[more],i};

            }
            map[num]=i;
        }
        return {-1,-1}; 

    }



};