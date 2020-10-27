#include<bits/stdc++.h>

using namespace std ;

// O(n) || O(1)

vector< int > moveElementToEnd( vector < int > &a, int toMove)
{
   while ( i  < j)
   {
       int start  = 0;
       int end = a.size() - 1 ;
       if (a[start] != toMove && a[end] != toMove)
       {
           start ++;
           end --;
       }

        if ( a[start] == toMove && a[end] == toMove)
       {
           end -- ;
       }

       if ( a[start] == toMove && a[end] != toMove )
       {
           swap(a[start] , a[end]);
       }

       else
       {
           end -- ;
       }
              
   }

   return a;
}

