/*
Source: Codeforces
Name: A. Bit++
link: http://codeforces.com/problemset/problem/282/A
Author: Muhammad Omar
*/
#include<iostream>
#include <string>
using namespace std ;
int Bits(int n ,string Statment){
    int result  = n ;
    if (Statment[0] == 'X' & Statment[1] == '+' & Statment[2] == '+')
        result++ ;
    else if (Statment[0] == '+' & Statment[1] == '+' & Statment[2] == 'X') 
        result++ ;
    else if (Statment[0] == 'X' & Statment[1] == '-' & Statment[2] == '-')
        result-- ;
    else if (Statment[0] == '-' & Statment[1] == '-' & Statment[2] == 'X') 
        result-- ;    
    return result ;
}
int main(int argc, char const *argv[])
{
    int size,res = 0 ;
    string str ;
    cin>> size ;
    for(int i = 0 ; i < size ; i++){
        cin>>str;
        res = Bits(res,str) ;
    }
   
    cout<<res<<endl;
    return 0;
}
