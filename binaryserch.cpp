

#include <bits/stdc++.h>
using namespace std ;


int main()
{

    int n;
    cin>> n ;

    int k ;
    cin>> k ;

    int pos = - 1;
    int a[n];
    int s = 0 ;
    int e= n- 1;
    for (int i = 0 ; i< n ; i++)
    {

        cin>> a[i];
    }
    sort(a,a+n);
    while(s<=e)
    {
        int mid = (s+e)/2;

        if ( a[mid]==k)
        {

            pos = mid ;
            break;
        }
        else if ( a[mid ]< k)
        {

            s= mid + 1 ;

        }
        else
        {

            e = mid - 1;
        }



    }
    if (pos == -1 )
    {

        cout<< " Not found ";
    }
    else
    {
        cout<< " Found and Index : "<< pos ;
    }



}






























