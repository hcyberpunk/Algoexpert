#include<bits/stdc++.h>

using namespace std ;


// O(n^2)  ||   O(1)
vector< int > TwoSum ( vector< int > &nums , int targetSum)
{
    vector< int > result;
    for ( int i = 0; i < nums.size(); i ++)
    {
        int potentialSum = targetSum - nums[i];
        for ( int j = 1 ; j < nums.size(); j ++)
        {
            if ( nums[j] == potentialSum)
            {
                result.push_back( nums[i]);
                result.push_back( nums[j]);
            }
        }
    }

    return result ;
}


// O(n)  || O(n)
vector< int > TwoSum1 ( vector< int > &nums , int targetSum)
{

vector< int > result;
unordered_set < int > map ;

for ( int i = 0 ; i < nums.size(); i++)
{
  int potentialSum = targetSum - nums[i];
  if ( map.find(potentialSum) != map.end ())
  {
      result.push_back(nums[i]);
      result.push_back(potentialSum);
  }
  else
  {
      map.insert(nums[i]);
  }
  
}
 return result;

}


// O(nlogn) || O(1)
vector< int > TwoSum2 ( vector< int > &nums , int targetSum)
{
    vector< int > result;
    sort (nums.begin() , nums.end()) ;
    int left_P ; int right_P;
    
    while ( left_P < right_P)
    {
       left_P  = 0; right_P = nums.size() - 1;  
      int potentialSum = nums[left_P] + nums[right_P];

      if (potentialSum < targetSum)
      {
        left_P++;
      }
      else if (potentialSum > targetSum )
      {
          right_P--;
      }
      else
      {
          result.push_back (nums[left_P]);
          result.push_back (nums[right_P]);

      }
    }

    return result;

}      