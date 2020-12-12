/* 
 * File:   date.h
 * Author: Andrew Adame
 *
 * Created on November 10, 2020, 10:08 AM
 */

#include <cstdlib>
#include <string>
#include "date.h"

using namespace std;

int main(int argc, char** argv) 
{
    //DATE
    date dt(12, 15, 2012);
    
    //PRINT RESULTS (IN 3 DIFFERENT FORMATS)
    dt.form1();
    dt.form2();
    dt.form3();
    cout << endl;
    
    return 0;
}

