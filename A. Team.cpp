/*
Source: Codeforces
Name: A. Team
link: http://codeforces.com/problemset/problem/231/A
Author: Muhammad Omar
*/

#include<iostream>
using namespace std ;
int Team(int n){
    int x , y , z , result = 0  ;
    for(int i = 0 ; i < n ; i++){
        cin>>x>>y>>z;
        if(x + y + z >= 2)
            result +=1 ;

    }
    return result ;
}
int main(int argc, char const *argv[])
{
    int x ;
    cin>>x;
    cout<<Team(x)<<endl;
    return 0;
}
