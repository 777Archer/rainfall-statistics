//David Archer
//Rainfall Statistics 
//Stats.cpp file

#include "Stats.h"

Stats::Stats()
{
    for (int num1 = 0; num1 < 12; ++num1)
    {
        statsArray[num1] = 0.0;
    }
}
/*Function that accepts two arguments an integer 
and and a double holding the actual data value*/
void Stats::setValue(int num1, double val)
{
    statsArray[num1] = val;
}
//Function that displays all of the values in the array
void Stats::displayValues()
{
    for (int num1 = 0; num1 < 12; ++num1)
    {
        cout << statsArray[num1] << " ";
    }
}
//Function that calculatesand returns the total of the 12 values in the array
double Stats::calcTotal()
{
    double total = 0.0;

    for (int num1 = 0; num1 < 12; ++num1)
    {
        total += statsArray[num1];
    }
    return total;
}
//Function that calculatesand returns the average of the 12 values in the array
double Stats::calcAverage()
{
    return calcTotal() / 12;
}
//Function that calculatesand returns the largest value in the array
double Stats::calcLargest()
{
    double largest = statsArray[0];

    for (int num1 = 0; num1 < 12; ++num1)
    {
        if (largest < statsArray[num1])
        {
            largest = statsArray[num1];
        }
    }
    return largest;
}
//Function that calculates and returns the smallest values in the array
double Stats::calcSmallest()
{
    double smallest = statsArray[0];

    for (int num1 = 0; num1 < 12; ++num1)
    {
        if (smallest > statsArray[num1])
        {
            smallest = statsArray[num1];
        }
    }
    return smallest;
}