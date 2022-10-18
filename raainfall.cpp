//David Archer
//Rainfall Statistics 
//raainfall.cpp file

#include <iostream>
#include <string>
#include "Stats.h"

using namespace std;

int main()
{
    Stats rainfall;             double rainfallAmount;

    string months[12] = {"January", "February", "March",
                           "April", "May", "June", "July",
                           "August", "September", "October", 
                           "November", "December" };
                           
                            //Display menu
                            cout << "Rainfall Statistics "
                                "\n-------------------\n";
    //User input
    for (int num1 = 0; num1 < 12; ++num1)
    {
        cout << "Enter rainfall for " << months[num1] << ": ";
        cin >> rainfallAmount;
        rainfall.setValue(num1, rainfallAmount);
    }

    //Display Finalized Report
    cout << "\nAnnual Rainfall Report: ";
    cout << "\n-----------------------";
    cout << "\nTotal Rainfall:    " << rainfall.calcTotal();
    cout << "\nAverage Rainfall:  " << rainfall.calcAverage();
    cout << "\nLargest Rainfall:  " << rainfall.calcLargest();
    cout << "\nSmallest Rainfall: " << rainfall.calcSmallest() 
         << "\n";

    //system("PAUSE");
    return 0;
}