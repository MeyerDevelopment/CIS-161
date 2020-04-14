//initial header by David Meyer
#ifndef DAYOFYEAR_H
#define DAYOFYEAR_H
#include <iostream>

//Use the standard naming convention.

using namespace std;

//Define the class DayOfYear.

class DayOfYear

{

  //Declare required private member variables.

private:

    //int to hold day of year that user selects
    int dayOfYear;

    //setup array of 12 for month names below
    //{ "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" }
    string month[12];

    //setup array of 13 that contains the end day for each month see below
    //{0,31,59,90,120,151,181,212,243,273,304,334,365}
    int endDayOfMonths[13];

    //Declare required static member variables to store

    //the results.

    static string dayInMonthDayFormat;

    static int reqDayOFYear;

  //Declare the required public member functions.

public:

    DayOfYear(int inputDayOfYear);

    void print();

    void setEndDaysOfMonths();

    void setMonthArrValues();

};

#endif // DAYOFYEAR_H
