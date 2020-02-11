//this is my first c++ program
#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <string>


using namespace std;



int main(int argc,char* argv[]){

  //Initializing vector to store random numbers, tracker to run loop, and var for user input
  std::vector<float> vect;
  srand(time(0));
  int tracker = 1;
  string choice;

  //loop to generate random numbers
  while (tracker == 1){
    float number = static_cast <float> (rand())/ static_cast <float> (RAND_MAX);
    vect.push_back(number);
    cout << "To generate more random numbers between 0 and 1 type Y, to end enter any other key: ";
    cin >> choice;
    if ((choice != "Y") && (choice != "y")) {
      tracker = -1;}}

  //printing out the vector
  for (float x: vect){
    tracker ++;
    cout << "Vector position [" << tracker << "] is "<< x << endl;}
  return 99;
}
