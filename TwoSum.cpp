class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result(2);
        unordered_map<int, int> map;
        int cur_sum=0;
        for(int i=0; i<nums.size();i++){
            
            if ( map.find(target-nums[i])!=map.end() ){
                result[0]=map.at(target-nums[i]);
                result[1]=i;
            }
            map.insert(make_pair(nums[i],i));
        }
        return result;
    }
};
