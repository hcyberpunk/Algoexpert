#include<bits/stdc++.h>

using namespace std ;

// brute force is just theree for loop, resulting in cubic time.

//O(n^2) || O(1) -> ignoring the space for sorting
vector< int > ThreeSum ( vector< int > &nums , int targetSum)
{
    vector< int > result;
    sort(nums.begin(), nums.end());
    for ( int i = 0; i < nums.size(); i ++)
    {
        int start; int end ;
        while ( start < end)
        {
    
            start = 0 ;
            end = nums.size() - 1;
            int potentialSum = nums[start] + nums[end] + nums[i];
            if (potentialSum < targetSum)
            {
                start ++;
            }
            else if (potentialSum < targetSum)
            {
                end --;
            }
            else
            {
                result.push_back(nums[start]);
                result.push_back(nums[end]);
                result.push_back(nums[i]);

            }
            
        }
    }

    return result;
}
