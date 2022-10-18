//David Archer
//Rainfall Statistics 
//Stats.h file

#ifndef STATS_H
#define STATS_H  


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
#endif
