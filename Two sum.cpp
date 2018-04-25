#include <algorithm> 
using namespace std;
class Solution {
public:
    vector<int> vecFind(vector<int>& nums,int ans1,int ans2)
    {
        int m,n;
        vector<int> result;
        for(m = 0;m<nums.size();m++)
        {
            if(nums[m]==ans1)
                break;
        }
        for(n = 0;n<nums.size();n++)
        {
            if((nums[n]==ans2)&&(m!=n))
                break;
        }
        result.push_back(m);
        result.push_back(n);
        return result;
    }
    
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        int i = 0;
        vector<int> result;
        vector<int> old(nums);//保存排序之前的数组,拷贝一份数据
        int size = nums.size();//元素总个数
        sort(nums.begin(), nums.begin()+size);//升序排序
        for(int j = 0;j<size-1;j++)
        {
            if((nums[j]+nums[size-1])<target)
                continue;
            else if((nums[j]+nums[size-1])==target)
            {
                result = vecFind(old,nums[j],nums[size-1]);
                return result;
            }
            else
                for(int k = size-2;k>j;k--)
                {
                    if((nums[k]+nums[j])==target)
                    {
                        result = vecFind(old,nums[j],nums[k]);
                        return result;
                    }
                    else if((nums[k]+nums[j])<target)
                        break;
                    else
                        continue;
                }
        }
        result = vecFind(old,nums[0],nums[1]);
        return result;
    }
    
};