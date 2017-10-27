#include<iostream>  
#include<algorithm>  
#include<stdio.h>  
using namespace std ;  
  
struct P    {  
    int begin , end ;  
};  
  
int cmp( P p1 , P p2 )  {  
    return p1.begin < p2.begin || ((p1.begin == p2.begin) && (p1.end < p2.end)) ;  
}  
  
int main()  {  
    int n ;  
    while( cin >> n && n ) {  
        P p[110] ;  
        for( int i = 0 ; i < n ; i++ )     
            cin >> p[i].begin >> p[i].end ;  
        sort(p,p+n,cmp) ;  
        int count = 1 ;  
        for(int j = 1 ; j < n ; j++) {  
            if( p[j].begin >= p[j-1].end )     
                    count++ ;  
            else    {  
                if( p[j].end >= p[j-1].end ) {  
                    p[j].begin = p[j-1].begin ;  
                    p[j].end = p[j-1].end ;  
                }  
            }  
        }  
        cout << count << endl ;  
    }  
    return 0 ;  
}  
