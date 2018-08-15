/*
Source: Codeforces
Name: A. Football
link: http://codeforces.com/problemset/problem/96/A
Author: Muhammad Omar
*/

#include<iostream>
#include <string>
using namespace std ;

string Football(string situation){
  int size = situation.length() ;
  int count = 0 ;
  for(int i = 0 ; i < size ; i++){
    if(situation[i] == '1' && situation[i+1] == '1' ){
      count+=1 ;
      if (count == 6)
        return "YES" ;
    } else if (situation[i] == '0' && situation[i+1] == '0' ){
      count+=1 ;
      if (count == 6)
        return "YES" ; 
    } else {
      count = 0 ;
    }
      
  }
  return "NO" ;
}



int main(int argc, char const *argv[])
{ 
  string input ;
  cin >> input ;
  cout<< Football(input) << endl ;
}