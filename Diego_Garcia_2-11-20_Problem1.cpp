//this is my first c++ program
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>

using namespace std;



int main(){

  //Initializing Q vector and other storage variables for calculations
  std::vector<float> Q;
  Q.push_back(2.3);
  Q.push_back(4.7);
  Q.push_back(0.1);
  Q.push_back(6.4);
  Q.push_back(3.8);
  Q.push_back(9.6);
  Q.push_back(9.0);
  Q.push_back(6.1);
  Q.push_back(7.3);
  Q.push_back(2.2);
  float sum = 0;
  float average = 0;
  float std_dev = 0;

  // Loops for sums calculated 
  for (float x : Q){
    sum += x ;}

  average = sum/Q.size() ;

  //Loop for standard deviation calc
  for (float x : Q){
    std_dev += pow( (x - average), 2) ;}
  std_dev = sqrt(std_dev/Q.size());

  //Printing out the calcuted results
  cout << "Sum: " << sum << "\nAverage: " << average << "\nStandard Deviation: " << std_dev << endl;
  return 99;
}
