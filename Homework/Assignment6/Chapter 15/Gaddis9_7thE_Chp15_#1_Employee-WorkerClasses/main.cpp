
#include <iostream>
#include <iomanip>
#include "ProductionWorker.h"

using namespace std;
 
int main(int argc, char** argv) 
{
    ProductionWorker worker;
    string userName;
    int userDate;
    int userShift;
    float userRate;
    cout << "Empty Production Worker Object Created." << endl;
    cout << "---------------------------------" << endl;
    cout << "        DISPLAYING DATA          " << endl;
    cout << "----------------------------------" << endl;
    cout << "NAME: " << worker.getName() << endl;
    cout << "Hire Date: " << worker.getHireDate() << endl;
    cout << "Work Shift: " << worker.getShift() << endl;
    cout << "Pay Eate: $" << worker.getPayRate() << "/hr" << endl;
    cout << endl;
    
    worker.setName("Andrew Adame");
    worker.setNUM(1234);
    worker.setHireDate(1, 1, 2020);
    worker.setShift(4);
    worker.setPayRate(20.3);
    
    cout << "Production Worker Object Now Filled." << endl;
    cout << "---------------------------------" << endl;
    cout << "        DISPLAYING DATA          " << endl;
    cout << "----------------------------------" << endl;
    cout << "NAME: " << worker.getName() << endl;
    cout << "Hire Date: " << worker.getHireDate() << endl;
    cout << "Work Shift: " << worker.getShift() << endl;
    cout << "Pay Eate: $" << worker.getPayRate() << "/hr" << endl;

    return 0;
}

