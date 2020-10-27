#include<bits/stdc++.h>

using namespace std;

vector< int > SpitalTraverse( vector< vector< int > > &matrix)
{
    vector< int > result;
    int rS = 0;
    int cS = 0;
    int rE  = matrix.size() - 1;
    int cE = matrix[0].size() - 1;

    while (rS <= rE && cS <= cE)
    {
        for( int col = 0 ; col < cE ; col ++)
        {
           result.push_back(matrix[rS][col]);
        }

        for( int row = rS + 1 ; row < rE ; row ++)
        {
            result.push_back(matrix[row][cE]);
        }

        for( int col = cE - 1 ; col >= cS ; col-- )
        {
            if(rS == rE)
            {
                break;
            }

            result.push_back(matrix[rE][col]);

        }

        for( int row = rE- 1; row >= rS ; row --)
        {
            if(cS == cE)
            {
                break;
            }

            result.push_back(matrix[row][cE]);
        }
    }

    return result;
}