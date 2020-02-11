//this is my first c++ program
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;



int main(){

  //Initializing tracker variables and sum
  int tracker3 = (1000-(1000%3))/3;
  int tracker5 = (1000-(1000%5))/5;
  int sum = 0;
  int i = 0;

  //Loop that does calculations
  while (i < tracker3){
    i += 1 ; 
    sum += 3*i;
    if (i <= tracker5) {
      sum += 5*i;}
      }

  //returning the sum
  cout << "The sum of all multiples of 3 or 5 below 1000 is: " << sum << endl ; 
  return 99;
}
