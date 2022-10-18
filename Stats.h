//David Archer
//Rainfall Statistics 
//Stats.h file

#include <iostream>
#include <string>

using namespace std;

class Stats
{
    double statsArray[12];

public:       Stats();

      void setValue(int num1, double val);

      void displayValues();

      double calcTotal();

      double calcAverage();

      double calcLargest();

      double calcSmallest();
};