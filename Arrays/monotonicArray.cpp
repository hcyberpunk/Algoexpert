#include<bits/stdc++.h>

using namespace std ;

bool isMonotonic(vector<int> array)
    {
    bool is_non_decreasing = true;
    bool is_non_increasing = true;
    for (int i = 1; i < array.size(); i++) 
    {
        if (array[i] < array[i - 1])
         {
            is_non_decreasing = false;
        }
        if (array[i] > array[i - 1])
         {
            is_non_increasing = false;
        }
    }
    return is_non_decreasing || is_non_increasing;
}