
// Given an input year then print year is either leap year or not leap
// year.

#include<iostream>
using namespace std;

bool LeapOrNot(int year){
    if(year%4==0){ 
        // leap year is evenly divisible by 4

        // if it has 00 at end it should be divisible by 400
        if(year%100==0){
            return year%400==0;
        }

        return true;

    }
    return false;
}

int main(){
    int year;
    cout<<"Enter the year to check if it is leap or not :";
    cin>>year;
  cout << "Year " << year << " is "
         << (LeapOrNot(year) ? "a Leap Year" : "Not a Leap Year") 
         << endl;    return 0;
}