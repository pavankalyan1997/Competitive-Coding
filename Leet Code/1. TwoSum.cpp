/*https://leetcode.com/problems/two-sum/submissions/ */
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        map<int,int> temp;
        int n=nums.size();
        for(int  i=0;i<n;i++){
            int complement=target-nums[i];
            if(temp.find(complement)!=temp.end()){
                int l=temp[complement];
                int r=i;
                result.push_back(l);
                result.push_back(r);
            }else{
                temp.insert(make_pair(nums[i],i));
            }
        
        }
        
        return result;
    }
};