//
//  main.cpp
//  hotelSuiteOccupancy
//
//  Created by Jeffer Hernandez on 2/29/20.
//  Copyright © 2020 Jeffer Hernandez. All rights reserved.
//

#include <iostream>
#include<iomanip>
#include <stdio.h>
#include <math.h>
#include <time.h>
using namespace std;


int main() {
    
    int floors = 10;
    double occupancy;
    int suites;
    
 
        double occS10;
        double occS11;
        double occS12;
        double occS14;
        double occS15;
        double occS16;
        
    while (floors>=10 && floors <=16){
            
            cout << "How many suites are occupied on the 10th floor?" << endl;
            cin >> occS10;
            floors++;
    
    
            cout << "How many suites are occupied on the 11th floor?" << endl;
            cin >> occS11;
                floors++;
        

            cout << "How many suites are occupied on the 12th floor?" << endl;
            cin >> occS12;
                floors++;
            
            
            cout << "There are no suites on the 13th floor. \n" << endl;
            floors++;
    
            
            cout << "How many suites are occupied on the 14th floor?" << endl;
            cin >> occS14;
            floors++;
       
            
            cout << "How many suites are occupied on the 15th floor?" << endl;
            cin >> occS15;
            floors++;
            
            
            cout << "How many suites are occupied on the 16th floor?" << endl;
            cin >> occS16;
        floors++;}
            
    double totalOcc = occS10 + occS11 + occS12 + occS14 + occS15 + occS16;
    
    double occPerc = (totalOcc/120)*100;
    
    cout << "Below is the hotel occupancy information for today: \n" << endl;
    cout << "Suites in Hotel" << "    " << "Suites Occupied" << "    " << "Percentage Occupied" << endl;
    cout << "     120" << "                   " << totalOcc << "                   " << occPerc << endl;
    return 0;

}

