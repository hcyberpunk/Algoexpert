#include<bits/stdc++.h>

using namespace std ;

// O(nlogn + mlogm) || O(1)  -> ignoring the space for sorting
vector< int > SmallestDifference( vector< int > &a , vector< int > &b)
{
    vector< int > result ;
    sort(a.begin() , a.end());
    sort(b.begin(), b.end());

    int firstNum ;
    int secondNum;
    int minimum_diff = INT_MAX;
    int current_diff = INT_MAX;

    while (firstNum < secondNum)
    {
         firstNum = a[0];
         secondNum = b[0];

        if (firstNum < secondNum)
        {
           current_diff = abs(firstNum - secondNum);
           firstNum++;
        }
        else if (firstNum > secondNum)
        {
            current_diff = abs(firstNum - secondNum);
            secondNum++;
        }

        else
        {
            result.push_back( {firstNum} , {secondNum}); 
            
        }

        minimum_diff = min ( current_diff , minimum_diff);
        
    }


return result ;
}
