//
//  main.cpp
//  penniesForPay
//
//  Created by Jeffer Hernandez on 2/27/20.
//  Copyright © 2020 Jeffer Hernandez. All rights reserved.
//

#include <iostream>
#include<iomanip>
#include <stdio.h>
#include <math.h>
using namespace std;


int main() {
    
    double pay = .02;
    double day = 1;
   
    //cout << "How many days did you work this month?" << endl;
    //cin >> day;
    
    
    
   //double compPay = (pow (.02,day));
    
    //cout << setprecision(2) << day << "    " << setprecision(2) << fixed << "$" << compPay << endl;
   
    while (day >= 0 && day<=30){
       
        day++;
        pay = pay * 2;
     
       
     
       cout << setprecision(2) << day << "    " << setprecision(2) << fixed << "$" << pay << endl;
    }
    


    

   /* cout << setprecision(2) << endl;
    cout << day << "    " << setprecision(2) << fixed << "$" << pay << endl;
    */
    
    return 0;
}
